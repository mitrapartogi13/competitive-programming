// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J
#include <bits/stdc++.h>
using namespace std;
#define el '\n'

int solve(int n){
    if (n == 1) return 1;
    return n * solve(n-1);
}
int main() {
    int n; cin >> n;
    cout << solve(n);
    return 0;
}