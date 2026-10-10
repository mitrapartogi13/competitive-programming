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
    int n; cin >> n;
    int years = n / 365;
    int month = max(n - years * 365, 0LL) / 30;
    int days = max(n - years * 365 - month * 30, 0LL);

    cout << years << " years\n";
    cout << month << " months\n";
    cout << days << " days\n";

}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while(t--){solve();}
}

