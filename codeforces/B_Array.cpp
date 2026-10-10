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
    vector<ll> arr(n);

    for (ll i = 0; i < n; i++){
        cin >> arr[i];   
    }
    vector<ll> ans;
    ll gre = 0, les = 0;
    for (ll i = 0; i < n; i++){
        gre = 0, les = 0;
        for (ll j = i + 1; j < n; j++){
            if (arr[i] > arr[j]){
                gre++;
            } else if (arr[i] < arr[j]){
                les++;
            }
        }   

        gre > les ? ans.pb(gre) : ans.pb(les);

    }

    for (auto i : ans){
        cout << i << ' ';
    }

    cout << el;
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