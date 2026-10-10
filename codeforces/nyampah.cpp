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
    stack<char> st; char c; int ok = 1;
    while(scanf("%c", &c) != EOF){
        if (c == '(' || c == '{' ||c == '['){
            st.push(c);
            
        } else if (c == ')' || c == '}' || c == ']'){
            if (st.empty()){
                ok = 0;
            } 
            else if (
                (c == ')' && st.top() != '(') || (c == '}' && st.top() != '{') || (c == ']' && st.top() != '[')
            ){
                ok = 0;
            } 
            else {
                st.pop();
            }
        }
    }

    if (st.empty() && ok)
        cout << "COMBO";
    else 
        cout << "FAIL";
}

signed main()
{
    // ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t  = 1;
    // cin >> t;
    while (t--){
         solve();
    }
    return 0;
}