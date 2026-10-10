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
    double x,y; cin >> x >> y;

    if (x > 0 && y > 0){
        cout << "Q1";    
    } else if (x > 0 && y < 0){
        cout << "Q4";
    } else if (x < 0 && y > 0) {
        cout << "Q2";
    } else if (x < 0 && y < 0){
        cout << "Q3";
    } else if (x == 0 && y == 0) {
        cout << "Origem";
    } else if (x == 0){
        cout << "Eixo Y";
    } else if (y == 0){
        cout << "Eixo X";
    }
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while(t--){solve();}
}

