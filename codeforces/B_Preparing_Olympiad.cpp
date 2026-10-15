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
    int n,l,r,x; cin >> n >> l >> r >> x;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int ans = 0, cnt = (ll)pow(2,n), total = 0;
    int paket = 0;
    for (int i = 1; i <= cnt; ++i) {;
        total = 0, paket = 0;
        int diff[2] = {INT32_MAX, INT32_MIN};
        for (int j = 0; j < n; ++j) {
            if(((i >> j) & 1) == 1){
                total += arr[j];
                ++paket;
                if (arr[j] < diff[0]) diff[0] = arr[j];
                if (arr[j] > diff[1]) diff[1] = arr[j];
            }
        }

        if((total >= l) && (total <= r) && ((diff[1] - diff[0]) >= x) && (paket >= 2)){
            ++ans;
        }
    }

    cout << ans;



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