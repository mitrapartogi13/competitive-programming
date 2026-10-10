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
    vector<ll> arr(9);;
    for (ll i = 0; i < 9; i++){
        cin >> arr[i];
    }
    ll sum = 0;
    for (ll i = 0; i < 7; i+=3){
        vector<ll> temp(arr.begin()+i, arr.begin()+i+2);

        Sort(temp);
        sum+=temp[1];
    }

    cout << sum << el;
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