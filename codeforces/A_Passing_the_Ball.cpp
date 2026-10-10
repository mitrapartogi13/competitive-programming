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
    ll n, ans = 0, currPos = 0; cin >> n;
    string s; cin >> s;
    vector<int> arr(n);
    arr[0] = 1;
    
    for (ll i = 0; i < n; i++){
        if (s[currPos] == 'R'){
            arr[currPos+1]++;
            currPos++;
        }else {
            arr[currPos-1]++;
            currPos--;
        }
    }

    for (ll i = 0; i < n; i++){
        if (arr[i] > 0){
            ans++;
        }   
    }

    cout << ans << el;
}

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t  = 1;
    cin >> t;
    while (t--){
         solve();
    }
    return 0;
}