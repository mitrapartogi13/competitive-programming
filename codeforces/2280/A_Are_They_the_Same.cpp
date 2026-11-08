// https://codeforces.com/contest/2280/problem/A
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
    ll n,k; cin >> n >> k;
    vector<ll> a(n), b(n);
    ll genapa = 0,ganjila = 0, genapb = 0, ganjilb = 0;
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];

        a[i] % 2 == 1? ++ganjila : ++genapa;
    }

    for (ll i = 0; i < n; ++i) {
        cin >> b[i];
        b[i] % 2 == 1? ++ganjilb : ++genapb;

    }

    if (k % 2 == 1){
        genapb <= genapa ? cout << "YES\n" : cout << "NO\n";
    } else {
        ganjilb <= ganjila ? cout << "YES\n" : cout << "NO\n";

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