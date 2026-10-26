// https://usaco.org/index.php?page=viewproblem2&cpid=572&lang=en
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
    int n, q; cin >> n >> q;
    vector<int> a(n+1),b(n+1),c(n+1);
    for (int i = 1; i <= n; ++i) {
        int k; cin >> k;
        a[i] = a[i-1];
        b[i] = b[i-1];
        c[i] = c[i-1];

        if (k == 1){
            ++a[i];
        } else if (k == 2){
            ++b[i];
        } else if (k == 3){
            ++c[i];
        }
    }

    for (int j = 0; j < q; ++j) {
        int l,r; cin >> l >> r;

        cout << (a[r] - a[l-1]) << " " << (b[r] - b[l-1]) << " " << (c[r] - c[l-1]) << el;
    }
}

int main() {
    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}