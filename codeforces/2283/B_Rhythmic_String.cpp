// https://codeforces.com/contest/2283/problem/B
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

// void solve() {
//     int n; cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> arr[i];
//     }

//     map<int, int> freq;
//     sort(arr.begin(), arr.end());
//     for (int i = 0; i < n - 1; ++i) {
//         int a = gcd(arr[i], arr[i+1]);
//         freq[a]++;
//     }
//     // sort(freq.rbegin(), freq.rend());

//     int max_val = -1, max_idx = 0;
//     for (auto it = freq.begin(); it != freq.end(); ++it) {
//         // cout << it->first << " " << it->second << el;
//         if ((it->second > max_val) && (it->first != 1)){
//             max_val = it->second;
//             max_idx = it->first;
//         }
//     }
//     max_val == -1 ? cout << n-1 << el : cout << n - max_val - 1 << el;
//     // cout << freq[1];
//     // cout << el;
// }


void solve(){
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int cnt = 0, ans = 0;;
    for (int i = 0; i < n; ++i) {
        int x = arr[i];
        cnt = 0;
        for (int j = 0; j < n; ++j) {
            if (arr[j] % x == 0){
                cnt++;
            }
        }

        ans = max(cnt, ans);
    }

    cout << n - ans << el;
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