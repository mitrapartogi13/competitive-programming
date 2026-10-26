// https://codeforces.com/contest/1690/problem/D
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
    vector<int> a(n+1);
    for (int i = 1; i <= n; ++i) {
        char c; cin >> c;
        
        if (c == 'W'){
            ++a[i];
        }
 
        a[i] = a[i] + a[i-1];
    }
 
    int ans = INT_MAX;
    int r = k, l;
    for (int i = 1; i <= (n-k+1); ++i) {
        l = i;
        ans = min(ans, a[r]- a[l-1]);
        ++r;
    }
 
    cout << ans << el;
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