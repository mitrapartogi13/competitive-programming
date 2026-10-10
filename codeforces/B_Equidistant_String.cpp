#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
#define int long long
#define ull unsigned long long
#define double long double
#define pii pair<int, int>
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define Sort(x)           sort(all(x))
#define Reverse(x)        reverse(all(x))

void solve(){
    string s,t; cin >> s >> t;
    string ans;
    int pa = 0,pb = 0, j = 0;
    for (int i = 0; i < s.size() ; i++){
        if(s[i] == t[i]){
            ans+=s[i];
        } else {
            if (j % 2 == 0){
                j++;
                ans+=s[i];
                pa++;
            } else {
                j++;
                ans+=t[i];
                pb++;
            }
        }
    }

    if ((pa-pb) == 0){
        cout << ans;
    } else {
        cout << "impossible";
    }
}

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t  = 1;
    // cin >> t;
    while (t--){
         solve();
    }
    return 0;
}