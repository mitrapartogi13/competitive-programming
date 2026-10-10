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

    vector<ll> arr(n*3);
    ll idx_acuan = 1,  iter_acuan = 1, iter = n+1;

    for (ll i = 0; i < 3*n; i++){
        if (i == idx_acuan){
            arr[i] = iter_acuan;
            idx_acuan+=3;
            iter_acuan++;
        } else {
            arr[i] = iter;
            iter++;
        }
    }

    for (ll i = 0; i < 3*n; i++){
        cout << arr[i] << ' ';
    }
    cout << el;
    
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