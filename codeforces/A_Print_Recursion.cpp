#include <bits/stdc++.h>
using namespace std;
#define el '\n'


int solve (int n){
    if (n == 0){
        
        return 0;
    } else {
       cout << "I love Recursion\n";
       return solve(n-1);
    }
}

int main() {
    int n; cin >> n;
    solve(n);
}