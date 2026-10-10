// Author: Lumeron
// Created at: 2026-06-02 21:56

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
    ll n, m; cin >> n >> m;
    // n (1 <= n <= 10) tipe hadiah, m (1 <= m <= 30) tipe stiker
    // n lines berikutnya, ada input k , lalu k bilangan yang menandakan stiker mana saja yang diperlukan. lalu terakhir adalah hadiah cash yang bisa didapat 
    /*
        bedah testcase

        2 10                    => n | m
        3 1 2 3 100             => k | a1, a2, ..., ak | cash 
        4 4 5 6 7 200           => s1,s2,..., sm
        2 3 1 4 5 2 2 1 3 4     => kumpulan stiker yang didapat

        expected output : 500

        simulasi: 

        2 3 1 4 5 2 2 1 3 4 
        
    */
    vector<vector<ll>> butuh;
    vector<ll> hadiah(n);
    for (ll i = 0; i < n; i++){
        ll k; cin >> k;

        for (ll j = 0; j < k; j++){
            ll x; cin >> x;
            butuh[i].pb(x);
        }

        cin >> hadiah[i];
    }


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
// in priority_queue, 