// https://codeforces.com/problemset/problem/1997/C
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
    string s; cin >> s;
    // s[0] = '(';
    ll balance = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '('){
            ++balance;
        } else if (s[i] == ')'){
            --balance;
        } else if (s[i] == '_'){
            if (balance >= 2){
                s[i] = ')';
                --balance;
            } else {
                s[i] = '(';
                ++balance;
            }
        }
    }
    // cout << s << el;
    stack<int> open, close;
    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        if(s[i-1] == '('){
            open.push(i);
        } else if (s[i-1] == ')'){
            if (!open.empty()){
                int tp = open.top();

                ans += i - tp;
                open.pop();
            }
        }
    }
    
    cout << ans << el;

    
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