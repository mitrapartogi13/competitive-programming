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
    int n; scanf("%lld", &n);
    int maks = LLONG_MIN, mini= LLONG_MAX, total = 0;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        scanf("%lld", &arr[i]);
        if (i>0){
            maks++;
            mini++;
        }
        maks = max(maks, arr[i]);
        mini = min(mini, arr[i]);
        total+=arr[i];
        total+=i;

        printf("%lld %lld %.4Lf\n", mini, maks, (double)total/((double)i+1.0));
    }
}

signed main()
{
    // ios_base::sync_with_stdio(false); cin.tie(nullptr); 
    // cout.tie(nullptr);
    int t  = 1;
    // cin >> t;
    while (t--){
         solve();
    }
    return 0;
}