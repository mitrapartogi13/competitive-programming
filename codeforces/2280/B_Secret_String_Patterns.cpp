// https://codeforces.com/contest/2280/problem/B
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


int ask (int l, int r){
    cout << "? " << l << " " << r << endl;
    int res; cin >> res;
    if (res == -1) exit(0);
    return res;
}
void solve() {
    int n; cin >> n;
    int c = ask(1, n);
    if (c == 0) {
        cout << "! NO" << endl;
        return;
    }

    int pref = ask(1, c);

    if (pref == c) cout << "! NO" << endl;
    else cout << "! YES" << endl;
}

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
