#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N), B(N), C(N), D(N);
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < N; i++) cin >> B[i];
    for (int i = 0; i < N; i++) {
        cin >> C[i];
        D[i] = B[C[i] - 1];
    }

    sort(A.begin(), A.end());
    sort(D.begin(), D.end());

    stack<int> stA, stD;
    for (int i = 0; i < N; i++) {
        stA.push(A[i]);
        stD.push(D[i]);
    }

    long long total_pairs = 0;

    // while (!stA.empty() && !stD.empty()) {
    //     if (stA.top() == stD.top()) {
    //         int val = stA.top();
    //         long long countA = 0, countD = 0;

    //         while (!stA.empty() && stA.top() == val) {
    //             countA++;
    //             stA.pop();
    //         }
    //         while (!stD.empty() && stD.top() == val) {
    //             countD++;
    //             stD.pop();
    //         }
    //         total_pairs += countA * countD;
    //     } 
    //     else if (stA.top() > stD.top()) {
    //         stA.pop();
    //     } 
    //     else {
    //         stD.pop();
    //     }
    // }
    for (int i = 0; i < N; i++){
        for (int i = 0; i < N; i++){
            if (A[i] == D[i]){
                total_pairs++;
            }
        }
        
    }
    cout << total_pairs << endl;

    return 0;
}