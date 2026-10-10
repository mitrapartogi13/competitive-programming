// Author: Lumeron
// Created at: 2026-05-31 11:52

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
    ll a, ans = 0; cin >> a;
    string s = to_string(a);
    ll curr = 0;
    while (a != 1){
        curr = s.size();
        a = curr;
        ans++;
    }

    cout << ans << el;
}

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    // int t  = 1;
    // cin >> t;

    string cmd;
    while (1){
        cin >> cmd;
        if (cmd!= "END"){
         solve();

        } else {
            break;
        }
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