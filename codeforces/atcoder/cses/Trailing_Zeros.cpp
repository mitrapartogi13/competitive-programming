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
    ll pembagi = 5, ans = 0;
    while (n/5 != 0){
        n/=5;
        ans+=n;
    }

    cout << ans; 

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