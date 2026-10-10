// Author: Lumeron
// Created at: 2026-05-04 21:55

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
    ll n,k; cin >> n >> k;

    vector<ll> hp(n), need(n+1, 0);

    map<ll,ll> pos;
    
    for (ll i = 0; i < n; i++){
        cin >> hp[i];   
    }

    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        need[abs(x)] += hp[i];
    }

    ll hp_total = 0;

    for (ll i = 1; i <= n; i++){
        hp_total += need[i];

        if (k*i < hp_total){
            cout << "NO\n"; return;
        }
    }

    cout << "YES\n";

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

// lower_bound / upper_bound notes:
// requirement: container must be sorted first.
// lower_bound(all(v), x) -> first position with value >= x
// upper_bound(all(v), x) -> first position with value > x
// int lb = lower_bound(all(v), x) - v.begin();
// int ub = upper_bound(all(v), x) - v.begin();
// count of x = ub - lb
// range [L, R]:
// auto it = lower_bound(all(v), L);
// valid if it != v.end() && *it <= R