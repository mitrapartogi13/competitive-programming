#include <bits/stdc++.h>
using namespace std;
#define el '\n'

int solve(int n, int m){
    if (n == 1 || m == 1){
        return 1;
    } else {
        return solve(n-1,m) + solve(n, m-1);
    }
}
int main() {
    int n,m; cin >> n >> m;
    cout << solve(n,m);
    return 0;
}