#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
#define int long long
#define ull unsigned long long
#define double long double
#define pii pair<int, int>
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define Sort(x)           sort(all(x))
#define Reverse(x)        reverse(all(x))

void solve(){
    int size; cin >> size;

    deque<int>qu;
    int input;
    for (int i = 0; i < size ; i++){
        cin >> input;

        qu.push_back(input);
    }

    sort(qu.begin(), qu.end());

    // for (auto i : qu){
    //     cout << i << ' ';
    // }
    int curr_tot = 0, ans = 0;

    for (int i = 0; i < size ; i++){
        if (curr_tot <= qu[i]){
            ans++;
        } else {
            continue;
        }
        curr_tot+=qu[i];

    }

    cout << ans << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t  = 1;
    // cin >> t;
    while (t--){
         solve();
    }
    return 0;
}