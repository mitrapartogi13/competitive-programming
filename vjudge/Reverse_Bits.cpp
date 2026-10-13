#include <bits/stdc++.h>
using namespace std;
#define el '\n'
// https://vjudge.net/problem/HackerRank-si-reverse-bits\
// https://leetcode.com/problems/reverse-bits/submissions/2170198940/
int main() {
    // class Solution {
    // public:
    //     int reverseBits(int n) {
    //         uint32_t ans = 0;
            

    //         for (int i = 0; i < 32; ++i) {
    //             if (((n >> i) & 1) == 1){
    //                 ans = ((ans << 1) | 1);
    //             } else {
    //                 ans = (ans << 1);
    //             }
    //         }

    //         return ans;
    //     }
    // };

    int n; cin >> n; 
    while(n--){
        uint32_t k, ans; cin >> k;
        

        for (int i = 0; i < 32; ++i) {
            if (((k >> i) & 1) == 1){
                ans = ((ans << 1) | 1);
            } else {
                ans = (ans << 1);
            }
        }

        cout << ans << " ";
    }
    return 0;
}