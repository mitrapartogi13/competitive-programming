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

    ll n; cin >> n;
    vector<ll> arr(10e6 + 2), prefix(10e6+2);
    for (ll i = 0; i < n; i++){
        ll a,b; cin >> a >> b;
        arr[a]++;
        arr[b+1]--;
    }
    
    // for (ll i = 0; i < n; i++){
    //     cout << arr[i] << ' ';
    // }

    prefix[0] = arr[0];
    prefix[1] = prefix[0]+arr[1];
    for (ll i = 2; i < 100000; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }
    ll ans = LLONG_MIN;
    for (ll i = 0; i < 100000; i++){
     ans = max(prefix[i], ans);   
    }

    cout << ans << el;


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