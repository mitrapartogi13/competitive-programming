#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
using ll = long long;
using ull = unsigned long long;
// using double = long double;
#define pii pair<int, int>
const int MOD = 1e9 + 7;
#define all(x) (x).begin(), (x).end()
#define Sort(x)           sort(all(x))
#define Reverse(x)        reverse(all(x))

void solve(){
    ll n, ii = 1; cin >> n;
    if (n == 1) {
        cout << 1 << '\n';
        return;
    }
    for (ll i = 1; i <= n ; i++){
        if (ii > n){
            cout << ii/2 << "\n";
            break;
        }
        ii*=2;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t  = 1;
    // cin >> t;
    while (t--){
         solve();
    }
    return 0;
}