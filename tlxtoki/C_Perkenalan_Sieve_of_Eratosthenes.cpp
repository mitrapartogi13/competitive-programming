// Author: Lumeron
// Created at: 2026-05-30 19:31

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
vector<bool> is_prime(10e5 + 1, true);
vector<bool> prima;    vector<ll> daftar_prima;


vector<bool> hitungSieve(ll n) {
    vector<bool> is_prime(n + 1, true);
    if (n >= 0) is_prime[0] = false;
    if (n >= 1) is_prime[1] = false;

    for (ll i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (ll j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}



void solve(){
    ll x; cin >> x;

    cout << daftar_prima[x-1] << el;



}

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll limit = 1000000;
    vector<bool> prima= hitungSieve(limit);


    for (ll i = 0; i < 999999; i++){
        if (prima[i]){
            daftar_prima.pb(i);
        }
    }
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