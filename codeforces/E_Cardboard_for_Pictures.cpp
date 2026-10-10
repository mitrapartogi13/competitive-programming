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

ll kuadrat(ll a, ll b, ll c){
    ll ans = -(b + sqrt(b*b - 4*a*c))/ (2*a);
    // __int128_t ans2 = - (b - (__int128_t)sqrt((double)b*(double)b - 4.0 *(double)a*(double)c)/ (2.0 *(double)a));
    return ans;
}
void solve(){
    ll n,m; cin >> n >> m;
    
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++){
        cin >> arr[i];
    }

    __int128_t a = 0, b = 0, c = 0; // asumsi paai rumus kuadratik ax^2 + bx + c = 0
    // a=> A, b=> B, c=>C
    for (ll i = 0; i < n; i++){
        a+=(arr[i]*arr[i]);
        b+=(4*arr[i]);
        c+=4;
    }

    c-=m;


    // ll kiri = 1;
    // ll kanan = 1e9; 
    // ll ans = 0;

    // while (kiri <= kanan){
    //     // https://www.tutorialpedia.org/blog/are-there-types-bigger-than-long-long-int-in-c/
    //     __int128_t mid = (kiri + kanan)/2; 
    //     __int128_t curr = (__int128_t)a*mid*mid + (__int128_t)b*mid + (__int128_t)c;

    //     if (curr == m){
    //         ans = mid;
    //         break;
    //     } else if (curr >= m){
    //         kanan = mid -1;
    //     } else {
    //         kiri = mid +1;
    //     }
    // }
    ll ans = kuadrat(a,b,c);
    cout << ans << '\n';

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