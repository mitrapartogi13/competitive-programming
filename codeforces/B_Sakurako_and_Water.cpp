#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
using ll = long long;
using ull = unsigned long long;
#define el '\n'
#define pii pair<int, int>
const int MOD = 1e9 + 7;
#define all(x) (x).begin(), (x).end()
#define Sort(x)           sort(all(x))
#define Reverse(x)        reverse(all(x))

void solve(){
    ll sz; cin >> sz;
    ll arr[sz][sz];

    for (ll i = 0; i < sz; i++){
        for (ll j = 0; j < sz; j++){
            cin >> arr[i][j];
        }   
    }

    ll ans = 0, min_diag[sz*2] = {1};
    for (ll i = 0; i < sz; i++){
        for (ll j = 0; j < sz; j++){
           if (abs(i - j) >= 0){
            min_diag[i - j + sz] = min(min_diag[i - j + sz], arr[i][j]);
           } 
        }
    }
    for (ll i = 0; i < 2*sz; i++){
        ans+=-min_diag[i];
    }
    cout << ans+1 << el;

}

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t  = 1;
    cin >> t;
    while (t--){
         solve();
    }
    return 0;
}