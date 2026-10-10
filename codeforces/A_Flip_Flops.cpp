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
    ll n, c, k; 
    cin >> n >> c >> k;

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++){
        cin >> arr[i];   
    }

    Sort(arr); 
    
    for (ll i = 0; i < n; i++){
        if (c >= arr[i]) {
            ll x = min(k, c - arr[i]);
            k -= x;
            c += arr[i] + x;
        } 
        else {
            break;
        }
    }
    
    cout << c << el;
}

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--){
         solve();
    }
    return 0;
}