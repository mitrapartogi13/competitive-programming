// https://vjudge.net/problem/Aizu-ITP1_3_D
#include <bits/stdc++.h>
using namespace std;
#define el '\n'

int main() {
    int a,b,c; cin >> a >> b >> c;
    vector<int> arr;
    for (int i = 1; i * i <= c; ++i) {
        if (c % i == 0){
            // cout << i << el;
            arr.push_back(i);
            if (c/i != i){
                // cout << c/i << el;
                arr.push_back(c/i);
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < arr.size(); ++i) {
        if ((arr[i] >= a) && (arr[i] <= b )) ++ans;
    
    }
    cout << ans << el;
    return 0;
}