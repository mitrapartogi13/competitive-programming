#include <bits/stdc++.h>
using namespace std;
#define el '\n'
#define ll long long
int main() {
    long long n; cin >> n;

    long long arr[n];
    for (long long i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    long long ans = INT_MAX; long long a = 0, b= 0;
    for (long long i = 0; i < (long long)pow(2,n); ++i) {
        a = 0, b = 0;
        for (long long j = 0; j < n; ++j) {
            if ((((i) >> j) & 1) == 1){
                a+=arr[j];
            } else {
                b+=arr[j];
            }
        }
        ans = min(ans, abs(a-b));

    }

    cout << ans << el;
    return 0;
}