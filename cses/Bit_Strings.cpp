#include <bits/stdc++.h>
using namespace std;
#define el '\n'
constexpr int MOD = 1'000'000'007;
using ll = long long;
ll binpow(ll a, ll b) {
    ll res = 1;

    while (b > 0) {
        if (b & 1)
            res = res * a % MOD;

        a = a * a % MOD;
        b >>= 1;
    }

    return res;
}

int main() {
    int n; cin >> n;
    cout << binpow(2, n);
    return 0;
}