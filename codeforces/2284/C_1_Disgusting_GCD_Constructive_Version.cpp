// https://codeforces.com/contest/2284/problem/C1
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;

using pii = pair<int, int>;
using pll = pair<ll, ll>;

constexpr int MOD = 1'000'000'007;
#define N 2*1e5+1
#define all(x) (x).begin(), (x).end()
#define el '\n'
vector<bool> is_prime(N + 1, true);
vector<int> primes;
void sieve(){
    if (N >= 0) is_prime[0] = false;
    if (N >= 1) is_prime[1] = false;
    
    for (int i = 2; i * 1LL * i <= N; ++i) {
        if (!is_prime[i]) continue;
    
        for (int j = i * i; j <= N; j += i) {
            is_prime[j] = false;
        }
    }
    
    for (int i = 2; i <= N; ++i) {
        if (is_prime[i]) primes.push_back(i);
    }
    
}

void solve() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        while (!is_prime[a]){
            a++;
        } 
        cout << a << " ";
    }
    cout << el;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}