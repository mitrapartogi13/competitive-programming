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
    int n, ans = 0; cin >> n;
    priority_queue<int> st;

    for (int i = 0; i < n; i++){
        int x; cin >> x;
        if (x > 0){
            st.push(x);
        } else {
            if (!st.empty()){
                ans+=st.top();
                st.pop();
            }
                
        }
    }

    cout << ans << endl;
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