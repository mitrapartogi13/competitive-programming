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
    int jumlah_kata; cin >> jumlah_kata;

    map<string,int> mp; 
    string input[3][jumlah_kata];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < jumlah_kata; j++){
            cin >> input[i][j];
            mp[input[i][j]]++;
        }
    }


    // for (int i = 0; i < 3; i++){
    //     for (int j = 0; j < jumlah_kata; j++){
    //         cout << input[i][j] << ' ';
    //     }

    //     cout << "\n";
    // }

    // cout << "\n====\n";

    int skor[3] = {0};

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < jumlah_kata; j++){
            if (mp[input[i][j]] == 1){
                skor[i]+=3;
            } else if (mp[input[i][j]] == 2){
                skor[i]+=1;
            }
        }
    }

    cout << skor[0] << ' ' << skor[1] << ' ' << skor[2] << '\n';

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