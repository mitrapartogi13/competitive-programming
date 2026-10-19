// https://vjudge.net/problem/Gym-405759K
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
    vector<int> arr;

    for (int i = 1; i * i <= n ; ++i) {
        if (n % i == 0){
            arr.push_back(i);
            if (n/i != i){
                arr.push_back(n/i);
            }
        }
    }

    sort(arr.begin(), arr.end());
    for (auto x : arr) {
        cout << x << el;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}