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
    int n; cin >> n;
    vector<vector<int>> arr;
    arr.pb(vector<int>());
    for (int i = 0; i < n; i++){
        string cmd; cin >> cmd;
        
        if (cmd == "add"){
            int l,x,y;
            cin >> l >> x >> y;
            for (int i = 0; i < y; i++){
                arr[l-1].pb(x);
            }
        } else if (cmd == "new"){
            arr.pb(vector<int>());
        } else if (cmd == "out"){
            int ll ,zz; cin >> ll >> zz;
            cout << arr[ll-1][zz-1] << "\n";
        }   
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