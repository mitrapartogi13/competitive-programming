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
    ll n; cin >> n;
    string str_n = to_string(n);
    ll ans = 0;
    for (int i = 0; i < (ll)pow(2, (ll)str_n.size() - 1); ++i) {
        ll curr = 0, total = 0;

        for (int j = 0; j < (ll)str_n.size(); ++j) {
            curr = curr * 10 + (str_n[j] - '0');
            if (((i >> j) & 1) == 1){
                total+=curr;
                curr = 0;
            }

        }
        total+=curr;
        ans+=total;
    }


    cout << ans;
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