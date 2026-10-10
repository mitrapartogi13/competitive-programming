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
    string a,b; cin >> a >> b;
    // int tempa, tempb;
    int aa = stoi(a), bb = stoi(b);

    int cc = aa+bb;

    string strc=to_string(cc);
    string finalc;
    for (auto i : strc){
        if (i!='0'){
            finalc+=i;
        }
    }

    int ansc = stoi(finalc);

    string za="",zb="";

    for (char i : a){
        if (i!='0'){
            za+=i;
        }
    }

    for (char i : b){
        if (i!='0'){
            zb+=i;
        }
    }

    int fina = stoi(za), finb = stoi(zb), finc = fina+finb;

    if (finc == ansc){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t  = 1;
    // cin >> t;
    while (t--){
         solve();
    }
    return 0;
}