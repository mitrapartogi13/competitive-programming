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
    ll n, neg = 0,zeros = 0 ; cin >> n;
    vector<ll> arr(n);

    for (ll i = 0; i < n; i++){
        cin >> arr[i];   

        if (arr[i] == 0){
            zeros++;
        } else if (arr[i] == -1){
            neg++;
        }
    }

    ll ans = zeros;
    if (neg % 2 != 0){
        ans+=2;
    }

    cout << ans << el;
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