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
    int n, cnt = 0, black[n+1], white[n+1]; cin >> n;
    char arr[n];
    for (ll i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] == '#'){
            black[i+1] = black[i] + 1;
        } else {
            white[i+1] = white[i] + 1;
            cnt++;
        }
    }

    for (ll i = 0; i < n; i++){
        if ()
    }

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