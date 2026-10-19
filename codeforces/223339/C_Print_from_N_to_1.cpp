// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C
#include <bits/stdc++.h>
using namespace std;
#define el '\n'

void solve(int n){
    if (n == 1){
        cout << 1;
        return;
    } 
    cout << n << ' ';
    solve(n-1);
}
int main() {
    int n; cin >> n;    
    solve(n);
    return 0;
}