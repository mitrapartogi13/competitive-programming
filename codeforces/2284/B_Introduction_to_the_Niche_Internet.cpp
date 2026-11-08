// https://codeforces.com/contest/2284/problem/B
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
    int n, k; cin >> n >> k;
    vector<ll> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(all(arr));

    int c = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == arr[n - 1]) c++;
    }

      if (k < c) {
          cout << "NO" << el;
        return;
    }

    cout << "YES" << el;
    for (int i = n - k; i < n; i++){
        cout << arr[i] << " ";
    } 
    for (int i = n - k - 1; i >= 0; i--){
        cout << arr[i] << " ";
    } 
    cout << el;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
