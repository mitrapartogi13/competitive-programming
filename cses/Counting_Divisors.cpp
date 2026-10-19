// https://cses.fi/problemset/task/1713/
#include <bits/stdc++.h>
using namespace std;
#define el '\n'

int main() {
    int n; cin >> n;

    while(n--){
        int x; cin >> x;

        vector<int> arr;
        for (int i = 1; i * i <= x; ++i) {
            if (x %  i == 0){
                arr.push_back(i);
                if (x/i != i){
                    arr.push_back(x/i);
                }
            }
        }
        cout << arr.size() << el;
    }
    return 0;
}