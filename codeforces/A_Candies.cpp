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


ll binExpIterative(ll exp) {
    ll base = 2;
    ll res = 1;
    while (exp > 0) {
        if (exp & 1) { 
            res *= base;
        }
        base *= base;
        exp >>= 1; 
    }
    return res;
}

void solve(){
    int n; cin >> n;
    int ans = 1;

    // for (ll i = 1; i <= 10e8; i++){
    //     ll sum = 0;
    //     for (ll j = 1; j <= 10e8; j*=2){
    //         sum+=i*j;

    //         if (sum > n){
    //             break;
    //         } else if (sum == n){
    //             cout << i << el;
    //             return;
    //         }
    //     }
    // }
    ll sum = n;
    for (ll i = 2; i <= 100; i++){
        ll kanan = binExpIterative(i)-1;
        if (sum % kanan == 0 ){
            cout << sum / kanan << el;
            return;
        }
        
    }
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