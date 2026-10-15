#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;

using pii = pair<int, int>;
using pll = pair<ll, ll>;

constexpr int MOD = 1'000'000'007;

#define all(x) (x).begin(), (x).end()
#define el '\n'

void solve() {
    int n; cin >> n;
    int cnt = 1, arr[n] = {0};

    for (int i = 0; i < n; ++i) {
        cnt*=2;
    }
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    bool ok = 0;
    int sum = arr[0];
    for (int i = 0; i < cnt; ++i) {
        sum = arr[0];
        for (int j = 1; j < n; ++j) {
            if(((i >> j) & 1) == 1){
                sum+=arr[j];
            } else {
                sum-=arr[j];
            }
            
       }
       if ((sum % 360 == 0) || (sum == 0)){
        ok = 1;
        cout << "YES";
        return;
       }
    }

    cout << "NO";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}