#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
#define ll long long
#define ull unsigned long long
#define double long double
#define elif else if
#define pii pair<int, int>
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define Sort(x)           sort(all(x))
#define Reverse(x)        reverse(all(x))
#define el endl

ll ans = 0LL;

ll res(ll x, ll pangkat){
    ll z = x;
    for (ll i = 1; i < pangkat; i++)
    {
        z*=x;
    }
    return z;
}
void solve(){
    ll x,n; cin >> x >> n;

    if (x == 0){
        cout << 0;
        return;
    }

    if (n == 0){
        cout << 0;
        return;
    }
    for(ll i = 2; i <= n; i+=2){
        ans += res(x,i);

        // cout << ans << endl;
    }
    cout << ans;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while(t--){solve();}
}

