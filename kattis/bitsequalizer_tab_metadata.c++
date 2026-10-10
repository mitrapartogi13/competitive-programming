// Author: Lumeron
// Created at: 2026-06-04 15:25

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

// void solve(){

// }

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int tc  = 1;
    cin >> tc;
    // while (tc--){
    //      solve();
    // }


    for (ll test = 1; test <= tc; test++){
        string s , t; cin >> s >> t;


        int zero_one = 0;
        int one_zero = 0;
        int unk_zero = 0;
        int unk_one = 0;
        for (ll i = 0; i < s.size(); i++){
            if (s[i] == '0' && t[i] == '1'){
                zero_one++;
            } else if (s[i] == '1' && t[i] == '0'){
                one_zero++;
            } else if (s[i] == '?' && t[i] == '1'){
                unk_one++;
            } else if (s[i] == '?' && t[i] == '0'){
                unk_zero++;
            }   
        }
        if (s == t){
            cout << "Case " << test << ": " << 0 << el;
            continue;
        }
        if (one_zero > (zero_one + unk_one)){
            cout << "Case " << test << ": " << -1 << el;
        } else {
            
            cout << "Case " << test << ": " << max(zero_one, one_zero) + unk_one + unk_zero << el;
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
// in priority_queue, 