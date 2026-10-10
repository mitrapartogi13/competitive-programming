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
    ll n, m, k;
    cin >> n >> m >> k;

    vector<ll> arr(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    vector<int> L(m + 1);
    vector<int> R(m + 1);
    vector<ll> D(m + 1);
    for (int i = 1; i <= m; i++) {
        cin >> L[i] >> R[i] >> D[i];
    }

    vector<ll> diff_ops(m + 2, 0);
    
    for (int i = 1; i <= k; i++) {
        int x, y;
        cin >> x >> y;

        diff_ops[x]++;
        diff_ops[y+1]--;
        
    }

        
    for (ll i = 0; i <= m; i++){
        diff_ops[i+1] = diff_ops[i] + diff_ops[i+1];
    }
    
    vector<ll> diff_array(n + 2, 0);
    
    for (int i = 1; i <= m; i++) {
        int left_idx = L[i];
        int right_idx = R[i];
        ll val = D[i];
        
        ll count = diff_ops[i]; 
        
        __int128_t x =(__int128_t)val* (__int128_t)count;
        diff_array[left_idx]+=x;
        diff_array[right_idx+1]-=x;
    }

    for (ll i = 0; i <= n; i++){
        diff_array[i+1] = diff_array[i] + diff_array[i+1];   
    }
    
    for (ll i = 1; i <= n; i++) {
        cout << arr[i] + diff_array[i] << ' ';
    }
    cout << el;
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