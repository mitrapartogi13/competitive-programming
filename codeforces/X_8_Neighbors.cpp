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
    int n,m; cin >> n >> m;

    char arr[n][m];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }

    int x,y; cin >> x >> y;

    const int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    const int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
    bool ok = 1;
    for (int d = 0; d < 8; ++d) {
        int nx = x + dx[d] - 1;
        int ny = y + dy[d] - 1;
    
        if (nx < 0 || nx >= n || ny < 0 || ny >= m){
            continue;
        } else {
            if (arr[nx][ny] == '.'){
                ok = 0;
            }
        }
        
    }

    ok ? cout << "yes" : cout << "no";
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