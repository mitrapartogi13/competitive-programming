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

vector<ll> lp(1e6+1);
vector<ll> pr;

void sieve(){
    ll N = 1e6;
    for (ll i=2; i <= N; ++i) {
    if (lp[i] == 0) {
        lp[i] = i;
        pr.push_back(i);
    }
    for (ll j = 0; i * pr[j] <= N; ++j) {
        lp[i * pr[j]] = pr[j];
        if (pr[j] == lp[i]) {
            break;
        }
    }
    }
}


void solve(){
    ll n; cin >> n;
    vector<ll> arr(n);
    arr[0] = pr[0];
    for (ll i = 1; i < n; i++){
        arr[i] = pr[i] * pr[i+1];
    }
    // arr[n-1] = pr[n-2];
    for (ll i = 0; i < n; i++){
        cout << arr[i] << ' ';   
    }
    

    cout << el;
    // cout << gcd(77,143) << el;
}

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t  = 1;
    cin >> t;
    sieve();
    while (t--){
         solve();
    }
    return 0;
}