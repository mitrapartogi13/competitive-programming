// https://codeforces.com/problemset/problem/1926/C
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
vector<int> pref(2*1e5 + 2, 0);

void precompute(){
    ll digit = 1;
    for (ll i = 1; i <= 2*1e5 ; ++i) {
        ll j = i, digit_sum = 0;
        while (j != 0){
            digit_sum+=j%10;
            j/=10;
        }
        pref[i] = pref[i-1] + digit_sum;
    }
}
void solve() {
    int n; cin >> n;
    cout << pref[n] << el;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    precompute();
    int t = 1;
    cin >> t;

    // for (int i = 1; i <= 20; ++i) {
    //     cout << pref[i] << " ";
    // }

    while (t--) {
        solve();
    }

    return 0;
}