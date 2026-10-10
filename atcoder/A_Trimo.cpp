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
    ll a; cin >> a; string s, ans = "" ; cin >> s;
    bool ok = 0;
    for (ll i = 0; i < s.size(); i++){
        char c = s[i];
     if ((s[i] == 'o' && !ok)){
     } else {
        ok = 1;
        ans+=c;
     }
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