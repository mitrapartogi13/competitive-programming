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
    int n,m; cin >> n >> m;
    char arr[n][m];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }   
    }

    int x,y; cin >> x >> y;
    --x, --y;
    if (
        x - 1 >= 0 && x + 1 < n &&
        y - 1 >= 0 && y + 1 < m &&

        arr[x+1][y] == 'x' && // atas
        arr[x-1][y] == 'x' && // bawah
        arr[x][y+1] == 'x' && // kanan
        arr[x][y-1] == 'x' && // kiri
        arr[x-1][y+1] == 'x' && // kiri atas
        arr[x+1][y+1] == 'x' && // kanan atas
        arr[x-1][y-1] == 'x' && // kiri bawah
        arr[x+1][y-1] == 'x'// kanan bawah

    ) {
        cout << "yes";
    } else {
        cout << "no";
    }
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while(t--){solve();}
}

