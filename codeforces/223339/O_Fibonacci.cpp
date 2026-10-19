// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/O
#include <bits/stdc++.h>
using namespace std;
#define el '\n'

int solve(int n){
    if (n == 1) return 0;
    if (n == 2) return 1;
    return solve(n-1) + solve(n-2);
}
int main() {
    int n; cin >> n;
    cout << solve(n);
    return 0;
}