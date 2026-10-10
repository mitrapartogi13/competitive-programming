// Author: Lumeron
// Created at: 2026-04-28 19:10

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
    ll n,m; cin >> n;
    vector<ll> a(n);

    for (ll i = 0; i < n; i++){
        cin >> a[i];
    }
    
    cin >> m;
    vector<ll> b(m);
    for (ll i = 0; i < m; i++){
        cin >> b[i];
    }

    Sort(a); Sort(b);

    ll i = 0, j = 0, ans =0;

    while (i < n && j < m){
        if (abs(a[i]-b[j]) <= 1){
            // cout << a[i] << ' ' << b[j] << el;
            ans++; i++;j++;

        } else if (a[i] - b[j] > 1){
            j++;
        } else {
            i++;
        }
    }

    cout << ans << el;
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