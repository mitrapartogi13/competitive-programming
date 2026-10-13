#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k; cin >> n >> k;

    // bitset<32>biner(n);

    // (biner[k] == 1) ? cout << "true" : cout << "false";
    
    // for (int i = 1; i <= k; ++i) {
    //     if (i == k){

    //     }
    //     n << i;
        
    // 1010
    // 0100
    //--------&
    // 0000
    if(((n & (1 << k)) == 0)){
        printf("false");
    } else {
        printf("true");
    }
    return 0;
}