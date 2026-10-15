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
    string s; cin >> s;
    string ans = "";
    bool ok = 1;
    for (int i = 0; i < s.size(); ++i) {
        if (ok && s[i] == '0'){
            ok = 0;
            continue;
        } else {
          ans+=s[i];

        }
    }

    if (ans != s) cout << ans;
    else {
        ans.pop_back();
        cout << ans
        ;
    }
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