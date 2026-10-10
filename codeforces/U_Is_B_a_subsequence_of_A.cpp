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
#define all(x)            (x).begin(), (x).end()
#define Sort(x)           sort(all(x))
#define Reverse(x)        reverse(all(x))
#define el                endl

void solve(){
    ll a,b; cin >> a >> b;
    ll arra[a], arrb[b];
    for (int i = 0; i < a; i++){
        cin >> arra[i];
    } 
    for (int i = 0; i < b; i++){
        cin >> arrb[i];   
    }

    ll x = 0, temp = 0;

    for (int i = 0; i < a; i++){
        if (arrb[x] == arra[i]){
            x++;
        }
    }
    if (x == b){
        cout << "YES" ;
    } else {
        cout << "NO";
    }
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while(t--){solve();}
}

