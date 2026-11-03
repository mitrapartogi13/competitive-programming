// https://codeforces.com/contest/44/problem/A
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
    cin.ignore();
    set<string> s;
    for (int i = 0; i < n; ++i) {
        string str; getline(cin, str);
        s.insert(str);    
    }
    

    cout << s.size();
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