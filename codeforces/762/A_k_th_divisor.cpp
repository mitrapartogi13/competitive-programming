// https://codeforces.com/problemset/problem/762/A
#include <bits/stdc++.h>
using namespace std;
#define el '\n'

int main() {
    int n,k; cin >> n >>  k;
    vector<int> arr;
    for (int i = 1; i * i <= n; ++i) {
        if (n %  i == 0){
            arr.push_back(i);
            if (n/i != i){
                arr.push_back(n/i);
            }
        }
    }
    sort(arr.begin(), arr.end());
    cout << el;
    if (k <= arr.size()){
        cout << arr[k-1];
    } else {
        cout << -1;
    }
    return 0;
}