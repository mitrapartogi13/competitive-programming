// Author: Lumeron
// Created at: 2026-04-30 16:22

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
    ll n,m; cin >> n >> m;
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    ll a[n][m];

    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < m; j++){
            cin >> a[i][j];
        }   
    }


    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < m; j++){
            ll curr_max = 0;
            for (ll z = 0; z < 4; z++){
                ll ni = i + dx[z];
                ll nj = j + dy[z];

                if (ni >= 0 && ni < n && nj >= 0 && nj < m){
                    curr_max = max(curr_max, a[ni][nj]);
                }
            }

            if (a[i][j] > curr_max){
                a[i][j] = curr_max;
            }
        }   
    }


    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < m; j++){
            cout << a[i][j] << ' ';
        }   
        cout << el;
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