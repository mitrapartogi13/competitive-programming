// https://codeforces.com/problemset/problem/2283/C
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;

using pii = pair<int, int>;
using pll = pair<ll, ll>;

constexpr int MOD = 1'000'000'007;

#define all(x) (x).begin(), (x).end()
#define el '\n'


void solve() {
    int n; cin >> n;
    vector<int> cnt((__lg(n))+2), ans(n), d(n,0);
    iota(ans.begin(), ans.end(), 1);
    for (int i = __lg(n)+1; i >= 0; --i) {
        for (int j : ans) {
            if(((j>>(i)) & 1) == 1){
                cnt[i]++;
            }   
        }


    }    

    for (int i = __lg(n)+1; i >= 1; --i) {
        if (cnt[i] % 2 == 0) {          
            d[(1 << (i-1)) - 1] = 1;    
            cnt[i-1]--;                 
            cnt[i]++;                   
        }
    }

    for (auto x : d) {
        cout << x << " ";
    }

    cout << el;

    // for (auto x : cnt) {
    //     cout << x << " ";
    // }
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}