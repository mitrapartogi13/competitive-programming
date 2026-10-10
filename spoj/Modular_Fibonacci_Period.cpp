#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;

using pii = pair<int, int>;
using pll = pair<ll, ll>;

constexpr int MOD = 1'000'000'007;

#define all(x) (x).begin(), (x).end()

ll pisano(ll n) {

    ll a = 0, b = 1, next = b, ans = 0;;

    while(1){
        if (n == 1)return 1;
        next = (a+b) % n;
        a = b;
        
        b = next;
        ++ans;
        if (a == 0 && b == 1){
            break;
        }
        
    }

    return ans;
}
void solve() {
    ll n; cin >> n;

    cout << pisano(n) << '\n';
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