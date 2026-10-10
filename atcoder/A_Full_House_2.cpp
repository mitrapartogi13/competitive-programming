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

void solve(){
    vector<int> a(4);
  cin >> a[0] >> a[1] >> a[2] >> a[3];
  sort(a.begin(),a.end());
  if(a[0]==a[1] && a[1]==a[2] && a[2]!=a[3]){
    cout << "Yes\n";
    return;
  }
  if(a[0]!=a[1] && a[1]==a[2] && a[2]==a[3]){
    cout << "Yes\n";
    return;
  }
  if(a[0]==a[1] && a[1]!=a[2] && a[2]==a[3]){
    cout << "Yes\n";
    return;
  }
  cout << "No\n";
  return;
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