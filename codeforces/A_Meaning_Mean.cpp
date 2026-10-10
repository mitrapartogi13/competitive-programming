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
    int n; cin >> n;

    deque<int> arr(n);

    for (int i = 0; i <n ; i++){
     cin >> arr[i];   
    }

    while(arr.size()>1){
        sort(all(arr));
        int x = (arr[0]+arr[1])/2;
        arr.pb(x);
        arr.pop_front();arr.pop_front();
    }

    cout << arr[0]<<'\n';
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