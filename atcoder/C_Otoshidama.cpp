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
    ll N,Y; cin >> N >> Y;

    ll x = 0, b = 0, c = 0;

    // 10'000, 5'000, 1'000
    // z = N - x - y
    ll sisa = Y;
    for (ll ix = 0; ix <= N; ix++){
        for (ll iy = 0; iy+ix <= N; iy++){
            c = N - ix - iy;
            if (ix * 10000 + iy * 5000 + c*1000 == Y){
                if (c < 0){
                    cout << "-1 -1 -1\n";return;
                }
                cout << ix << ' ' << iy << ' ' << c << el; return;
            }
        }   
    }
    cout << "-1 -1 -1\n";
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