// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B
#include <bits/stdc++.h>
using namespace std;
#define el '\n'


void solve(int n){
    if (n == 0) return;
    solve(n-1);
    cout << n << el;
}
int main() {
    int n; cin >> n;
    solve(n);
    return 0;
}