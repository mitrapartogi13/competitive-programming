// Author: Lumeron
// Created at: 2026-06-01 17:02

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
    ll n, t; cin >> n >> t;

    ll arr[n];
    ll sum = 0, sum_even = 0;
    for (ll i = 0; i < n; i++){
        cin >> arr[i];
        sum+=arr[i];
        if (arr[i] % 2 == 0){
            sum_even+=arr[i];
        }
    }

    if (t == 1){
        cout << 7;
    } else if (t == 2){
        arr[0] > arr[1] ? cout << "Bigger" : arr[0] == arr[1] ? cout << "Equal" : cout << "Smaller";
    } else if (t == 3){
        ll arr2[3] = {arr[0], arr[1], arr[2]};
        sort(arr2, arr2+3);
        cout << arr[1];
    } else if (t == 4){
        cout << sum;
    } else if (t == 5){
        cout << sum_even;
    } else if (t == 6){
        string ans_5 = "";
        for (ll i = 0; i < n; i++){
            
            arr[i] = (arr[i] + 26) % 26;
            char c = arr[i] + 'a';
            ans_5 += c;
        }

        cout << ans_5;
    } else {
        int i = 0;
        vector<bool> ok(n, false);
        ok[0] = 1;
        while(1){
            i = arr[i];

            if (i < 0 || i >= n){
                cout << "Out";
                break;
            }

            if (i == n - 1){
                cout << "Done";
                break;
            }

            if (ok[i]){
                cout << "Cyclic";
                break;
            }


            
            ok[i] = 1;
        }
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