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
    int n, maks = LLONG_MIN; cin >> n;

    vector<int> arr(n), sorted(n);

    for (int i = 0; i < n; i++){
        cin >> arr[i];
        maks = max(maks, arr[i]);
        sorted[i] = arr[i];\
    }
    Sort(sorted);Reverse(sorted);
    for (int i = 0; i < n; i++){
        // cout << arr[i]-maks << ' ';

        if (maks == arr[i]){
            cout << arr[i]-sorted[1] << ' ';
        } else {
            cout << arr[i]-maks << ' '; 
        }
    }

    cout << '\n';

}

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t  = 1;
    cin >> t;
    while (t--){
         solve();
    }
    return 0;
}