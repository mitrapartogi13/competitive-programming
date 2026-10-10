#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
#define int long long
#define ull unsigned long long
#define double long double
#define elif else if
#define pii pair<int, int>
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define Sort(x)           sort(all(x))
#define Reverse(x)        reverse(all(x))

void solve(){
    // printf("%d", 12 >> 1);
    int n; cin >> n;
    int cnt = 0;
    while (n > 1){
        if (n%2==1)
            cnt++;
        n/=2;
    }
    int ans = 0;
    for (int i = 0; i < cnt; i++){
        ans += pow(2, i);
    }
    cout << ans;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t = 1;
    cin >> t;
    while(t--){solve();}
}

