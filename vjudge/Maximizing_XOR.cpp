#include <bits/stdc++.h>
using namespace std;

int main() {
    int l,r; cin >> l >> r;
    int maxx = 0;
    for (int i = l; i <= r; ++i) {
        for (int j = i; j <= r; ++j) {
            maxx = max(maxx, i ^ j); 
        }
    }

    cout << maxx;
    return 0;
}