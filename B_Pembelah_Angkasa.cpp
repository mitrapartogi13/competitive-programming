// /home/mpartogi/main/competitive-programming/B_Pembelah_Angkasa.cpp
#include <bits/stdc++.h>
using namespace std;
#define el '\n'

int main() {
    int n, k; cin >> n >> k;
    
    if (k == (n-1)){
        for (int i = 0; i < n; ++i) {
            cout << 0 << " ";
        }
    } else {
        // mis 5 2

        // 0 0 3 1 1
        for (int i = 1; i <= (n-k-1); ++i) {
            cout << 0 << " ";
        }

        cout << n-k << " ";

        for (int i = 1; i <= k; ++i) {
            cout << 1 << " ";
        }
    }
    return 0;
}