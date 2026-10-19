// https://codeforces.com/problemset/problem/96/B
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
    string s, ans = ""; cin >> s;

    for (int i = 0; i < s.size(); ++i) {
        if ((s[i] != '4') || (s[i] != '7')){
            int num = (s[i] - '0');
            ans+=(min(abs(num-4), abs(num-7)) + '0');
        } else {
            ans+=s[i];
        }
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