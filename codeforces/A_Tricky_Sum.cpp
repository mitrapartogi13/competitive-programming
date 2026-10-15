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

    if (n > 1){
        ll all_sum = (1 + n)*n/2;

        ll sq_cnt = (ll)log2(n);
        ll sq_sum = (ll)pow(2,sq_cnt+1) -1;
        cout << all_sum - (2*sq_sum) << el;

    } else {
        cout << -1 << el;
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