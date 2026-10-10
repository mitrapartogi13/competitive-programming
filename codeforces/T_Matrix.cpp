#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
#define ll long long
#define ull unsigned long long
#define double long double
#define elif else if
#define pii pair<int, int>
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define Sort(x)           sort(all(x))
#define Reverse(x)        reverse(all(x))

void solve(){
    ll n; cin >> n;
    ll arr[n][n];
    ll pri = 0LL, sec = 0LL;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
            
            if (i == j){
                pri+=arr[i][j];
            } 
            
            if ((i + j) == (n-1) ) {
                sec+=arr[i][j];
                // cout << "sec " <<  arr[i][j] <<  " ";

            }
        }   
    }

    cout <<  llabs(pri - sec);


}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while(t--){solve();}
}

