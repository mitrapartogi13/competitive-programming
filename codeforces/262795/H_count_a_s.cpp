// https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/H
#include <bits/stdc++.h>
using namespace std;
#define el '\n'

int N = 1e5+1;
int main() {
    string s; cin >> s;

    int pref[N];
    pref[0] = 0;
    for (int i = 1; i <= s.size(); ++i) {
        pref[i] = ((int)(s[i-1] == 'a') ? 1 : 0) + pref[i-1];
    }
    
    int q; cin >> q;
    
    int l,r; 
    while(q--){
        cin >> l >> r;
        cout << pref[r] - pref[l-1] << el;
    }
    return 0;
}