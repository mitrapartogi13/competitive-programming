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

void solve(){
    ll n,t; cin >> n >> t;
    vector<ll> arr(n),prefix(n+1);
    prefix[0] = 0;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (i == 0){
            prefix[1] = arr[i];
        } else {
            prefix[i+1] = prefix[i]+arr[i];
        }
    }

    for (int i = 0; i < t; i++){
        ll a,b; cin >> a >> b;
        cout << prefix[b]-prefix[max(a-1,0LL)] << '\n';
    }
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
