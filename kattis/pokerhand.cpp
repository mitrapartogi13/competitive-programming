    // Author: Lumeron
    // Created at: 2026-06-01 13:14

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
        

        map<char,int> mp;
        for (ll i = 0; i < 5; i++){
            string s; cin >> s;
            mp[s[0]]++;
        }
        int ans = 0;
        for (auto i : mp){
            // cout << i.second << el;
            ans = max(ans, i.second);
        }

        cout << ans;
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