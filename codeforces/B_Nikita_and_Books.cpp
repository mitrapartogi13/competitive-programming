// Author: Lumeron
// Created at: 2026-07-21 14:12

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
    vector<ll> arr(n);
    ll sum = 0, ok = 1;
    for (ll i = 0; i < n; i++){
        cin >> arr[i];
    }

    ll need = 1;

    for (ll i = 0; i < n; i++){
        if (arr[i] < need){
            cout << "NO\n";
            return;
        }

        ll x = arr[i] - need;

        if (i + 1 < n)
            arr[i + 1] += x;

        need++;
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
// in priority_queue, 