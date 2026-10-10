#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
#define int long long
#define ull unsigned long long
#define double long double
#define elif else if
#define pii pair<int, int>
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define Sort(x)           sort(all(x))
#define Reverse(x)        reverse(all(x))

void solve(){
    int a,b,c,d; cin >> a >> b >> c >> d;

    /*
    approach => karena (a*b) mod m = (a mod m * b mod m) mod m
    
    dan kita hanya perlu 2 angka dibelakang koma
     */

    int ans = ((a % 100) * (b%100) * (c%100) * (d%100) );

    
    // string z = to_string(ans);
    //  cout << ans << endl << z[z.size()-2] << z[z.size()-1];

    // printf("%0lld\n", ans);
    // printf("%lld\n", ans);
    string z = to_string(ans);
    if (ans < 10){
        printf("%02lld", ans);
    } else {
        cout << z[z.size()-2] << z[z.size()-1];
        // printf("%lld", ans);
    }
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while(t--){solve();}
}

