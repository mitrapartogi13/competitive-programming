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

    vector<int> arr(n);

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr.rbegin(), arr.rend());

    if(arr[0]==arr[arr.size()-1]){
        cout << "NO\n";
        return;
    }
    swap(arr[1], arr[arr.size()-1]);
    cout << "YES\n";
    for (auto i : arr){
        cout << i << ' ';
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