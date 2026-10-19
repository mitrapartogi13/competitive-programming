// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F
#include <bits/stdc++.h>
using namespace std;
#define el '\n'

void solve(int arr[], int n){
    if (n < 0){
        return;
    }
    cout << arr[n] << ' ';
    solve(arr, n - 2);
}
int main() {
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    n % 2 == 1 ? solve(arr, n-1) : solve(arr, n-2);
    return 0;
}