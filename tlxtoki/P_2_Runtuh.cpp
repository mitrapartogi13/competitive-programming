// Author: Lumeron
// Created at: 2026-05-30 18:00

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
using ll = long long;
using ull = unsigned long long;
#define el '\n'
#define pii pair<int, int>
const int MOD = 1e9 + 7;
#define all(x) (x).begin(), (x).end()
#define Sort(x)           sort(all(x))
#define Reverse(x)        reverse(all(x))
vector <string> grid;
int r,c;

ll cari_baris_terbawah();
void hilangkan();
void runtuhkan();

ll cari_baris_terbawah(){
    ll baris_terbawah = -1;
    for (ll i = r-1; i >= 0; i--){
        bool ok = 1;
        for (ll j = 0; j < c; j++){
            if (grid[i][j] == '0'){
                ok = 0;
                break; 
            }
        }

        if (ok){
            baris_terbawah = i;
            return baris_terbawah;
        }
    }

    return -1;
}

void hilangkan(){
    for (ll i = r-1; i >= 0; i--){
        bool ok = 1;
        for (ll j = 0; j < c; j++){
            if (grid[i][j] == '0'){
                ok = 0;
                break; 
            }
        }

        if (ok){
            for (ll j = 0; j < c; j++){
                grid[i][j] = '0';
            }
        }
    }
}

void runtuhkan(ll baris_terbawah){
    
    for (ll j = 0; j < c; j++){
        for (ll i = baris_terbawah; i >= 0; i--){
            if (grid[i][j] == '1'){
                
                for (ll k = i; k < r - 1; k++){
                    if ((grid[k+1][j] == '0')){ 
                        grid[k+1][j] = '1';
                        grid[k][j] = '0';
                    } else {
                        break;
                    }
                }
            }
        }
    }
}
void solve(){
    cin >> r >> c;
    grid.resize(r);


    for (ll i = 0; i < r; i++){
        cin >> grid[i];
    }
    // cout << "lowest: " << cari_baris_terbawah() << el;


    for (ll i = 0; i < 10; i++){
        ll lowest = cari_baris_terbawah();
        hilangkan();
        runtuhkan(lowest);        
    }



    for (ll i = 0; i < r; i++){
        for (ll j = 0; j < c;j++){
            cout << grid[i][j];
        }
        cout << el;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t  = 1;
    // cin >> t;
    while (t--){
         solve();
    }
    return 0;
}

// lower_bound / upper_bound notes:
// requirement: container must be sorted first.
// lower_bound(all(v), x) -> first position with value >= x
// upper_bound(all(v), x) -> first position with value > x
// int lb = lower_bound(all(v), x) - v.begin();
// int ub = upper_bound(all(v), x) - v.begin();
// count of x = ub - lb
// range [L, R]:
// auto it = lower_bound(all(v), L);
// valid if it != v.end() && *it <= R