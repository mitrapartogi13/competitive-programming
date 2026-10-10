#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<vector<int>> children(n + 1);
    for (int i = 2; i <= n; ++i) {
        int p;
        cin >> p;
        children[p].push_back(i);
    }

    for (int i = 1; i <= n; ++i) {
        if (children[i].empty()) continue;

        int leaf_count = 0;
        for (int child : children[i]) {
            if (children[child].empty()) {
                leaf_count++;
            }
        }

        if (leaf_count < 3) {
            cout << "No\n";
            return 0;
        }
    }

    cout << "Yes\n";

    return 0;
}