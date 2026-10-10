// Author: Lumeron
// Created at: 2026-06-01 14:46

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

//     int line = 0;
//     string input;
//     while(getline(cin, input)){
//         stringstream ss(input);

//         line++;
//         int minval = INT_MAX , maxval = INT_MIN, range = 0; 
//         int x;
//         while (ss >> x){
//             minval = min(minval, x);
//             maxval = max(maxval, x);
//         }

//         range = maxval - minval;
//         cout << "Case " << line << ": " << minval << ' ' << maxval << ' ' << range << el;
//     }
// }


void solve(){
    int n;
    int cs = 0;
    while (cin >> n){
        vector<ll> arr(n);

        for (ll i = 0; i < n; i++){
            cin >> arr[i];
        }   
        cs++;
        cout << "Case " << cs << ": " << *min_element(all(arr)) <<  ' ' << *max_element(arr.begin(), arr.end()) << ' '  << *max_element(arr.begin(), arr.end()) - *min_element(all(arr)) << el;
    }
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
// in priority_queue, 