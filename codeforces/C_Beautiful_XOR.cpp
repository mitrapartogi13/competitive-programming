#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;

using pii = pair<int, int>;
using pll = pair<ll, ll>;

constexpr int MOD = 1'000'000'007;

#define all(x) (x).begin(), (x).end()

void solve() {
    int a,b; cin >> a >> b;

    if (a == b){
        cout << 0 << '\n';
    } else if (a < b){
        cout << -1 << '\n';
    } else {
        vector<int> ans;
        while (a != b){
            int turn = 0;
            for (int i = 1; i <= 100; ++i) {
                if (i % 2 == 1){
                    a = a ^ (1 << )
                } else {

                }
            }
            
        }
    }
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