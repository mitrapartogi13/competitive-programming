#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
using ll = long long;
using ull = unsigned long long;
#define pii pair<int, int>
const int MOD = 1e9 + 7;
#define all(x) (x).begin(), (x).end()
#define Sort(x)           sort(all(x))
#define Reverse(x)        reverse(all(x))

void solve(){
    string s; cin >> s;
    ll n = s.size();
    vector<ll> arr(n), prefix(n);
    prefix[0] = 0;
    for (int i = 0; i < n-1; i++){
        if (s[i] == s[i+1]){
            prefix[i+1] = prefix[i] + 1;
        } else {
            prefix[i+1] = prefix[i];
        }
    }

    ll cmd; cin >> cmd;

    for (ll i = 0; i < cmd ; i++){
        ll a,b; cin >> a >> b;

        cout << prefix[b-1]- prefix[a-1] << '\n';
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