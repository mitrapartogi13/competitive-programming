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
    vector<int> arr(n), temp, ganjil,ganjiltemp, genap,genaptemp;
    int cntgnj = 0;
    for (int i = 0; i < n; i++){
        cin >> arr[i]; temp.pb(arr[i]);

        if (arr[i] % 2 == 1){
            ganjil.pb(arr[i]);
            ganjiltemp.pb(arr[i]);
        } else {
            genap.pb(arr[i]);
            genaptemp.pb(arr[i]);
        }
    }

    Sort(temp); Sort(genaptemp); Sort(ganjiltemp);

    if (arr == temp){
        cout << "Yes\n";
    } else {
        if (ganjiltemp == ganjil && genap == genaptemp){
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }#include <bits/stdc++.h>
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
    
    }
    
    signed main()
    {
        ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
        int t  = 1;
        cin >> t;
        while (t--){
             solve();
        }
        return 0;
    }
inc
    
}

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t  = 1;
    cin >> t;
    while (t--){
         solve();
    }
    return 0;
}