// Author: Lumeron
// Created at: 2026-05-31 20:24

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
    int x; 

    int attempts[26] = {0}, ac[26] = {0}, ans = 0;
    while (1){
        cin >> x;

        if (x == -1){
            break;
        }

        char c; cin >> c;
        attempts[c - 65]++;

        string result; cin >> result;
        if (result == "right"){
            // ac di soal itu
            ac[c-65] = 1;

            // assign penalti

            // cout << x << " menit " << c << ' ' << (attempts[c-65] - 1) * 20 << el;
            ans += (attempts[c-65] - 1) * 20 + x;


        } else {
            
        }
    }
    int soal = 0;
    for (ll i = 0; i < 26; i++){
        if (ac[i] == 1){
            soal++;
        }
    }
    cout << soal << ' ' <<  ans;
}

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t  = 1;
    // cin >> t;

    // cout << 'A' - 65;
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