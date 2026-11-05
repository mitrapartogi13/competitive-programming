// https://codeforces.com/contest/2283/problem/A
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
    int l, r; cin >> l >> r;

    if (abs(l) == abs(r)){
        cout << 0 << el;
    } else if ((l > 0 && r > 0) || (l < 0 && r < 0)){
        cout << abs(abs(r) - abs(l)) << el;
    } else if (l < 0){
        cout << max(0, abs(abs(r)-abs(l)) - 1) << el;
    } else if (r > 0){
        cout << r - 1 << el;
    }
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