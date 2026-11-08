// https://codeforces.com/contest/2284/problem/A2
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
    vector<ll> arr(n);
    for (ll i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(all(arr));
    reverse(all(arr));

    ll a = 0,b = 0;

    for (int i = 0; i < n; ++i) {
        ll x = 1;

        if (a < b){
            a+=(1LL<<arr[i]);
        } else {
            b+=(1LL<<arr[i]);
        }
    }

    cout << a * b << el;
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