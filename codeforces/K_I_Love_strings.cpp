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
    string a, b, ans = ""; cin >> a >> b;

    int cnt_a = 0, cnt_b = 0;

    while (cnt_a < a.size() || cnt_b < b.size()){
        if (cnt_a < a.size()){
            ans+=a[cnt_a];
            ++cnt_a;
        }

        if (cnt_b < b.size()){
            ans+=b[cnt_b];
            ++cnt_b;
        }
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