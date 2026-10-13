#include <bits/stdc++.h>
using namespace std;

int main() {
    bitset<5>biner(7);
    int ans = 0;
    for (int i = 0; i < 7; ++i) {
        if ((biner & (1 << i)) != 0){
            ans+=pow(2, i);
        } else {

        }
    }

    cout << ans;
    return 0;
}