#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
// #define int long long
#define ll long long
#define ull unsigned long long
#define double long double
#define elif else if
#define pii pair<int, int>
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define Sort(x)           sort(all(x))
#define Reverse(x)        reverse(all(x))

ll binpow(ll a, ll b){
    ll res = 1;
    while(b > 0){
        if(b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

void solve(){
    ll a,b,c,d; cin >> a >> b >> c >> d;
    if (b * logl(a) > d * logl(c)){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}


signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while(t--){solve();}
}

