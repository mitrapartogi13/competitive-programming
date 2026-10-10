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
    // vector<ll> arr(26);
    set <char> myset;
    string s; cin >> s;
    ll ans = 0;
    for (ll i = 0; i < s.size(); i++){
        char c = s[i];
        if (myset.contains(c)){
            ans+=1;
        } else {
            ans+=2;
            myset.insert(c);
        }
    }

    cout << ans << el;


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