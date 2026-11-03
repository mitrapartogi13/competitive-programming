// https://codeforces.com/problemset/problem/1692/E
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
    ll n, s; cin >> n >> s;
    vector<int> arr(n), pref(n+1);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    pref[1] = arr[0];
    for (int i = 2; i <= n; ++i) {
        pref[i] = pref[i-1] + arr[i-1];
    }
    bool ok = 0;
    ll l = 1, best = -1;

    for (ll r = 1; r <= n; ++r) {
        while (l <= r && (pref[r] - pref[l-1] > s)){
            l++;
        }

        if (pref[r] - pref[l-1] == s){
            best = max(best, r - l + 1LL);
        }
    }

    best == -1 ? cout << -1 << el : cout << n - best << el;

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