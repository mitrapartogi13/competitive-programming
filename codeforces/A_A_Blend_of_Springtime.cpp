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
    string s; cin >> s;
    ll n = s.size();
    for (ll i = 0; i < n-2; i++){
        if ((s[i] + s[i+1] + s[i+2] == 198)){
            if (!((s[i] == s[i+1]) && (s[i+1] == s[i+2]))){
                cout << "Yes\n";
                return;
            } 
            

        }
    }

    cout << "No\n";
    // if (s[0] == 65){
    //     cout << "aa\n";
    // }
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