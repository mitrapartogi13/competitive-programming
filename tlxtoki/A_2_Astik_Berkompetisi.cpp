#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
using ll = long long;
using ull = unsigned long long;
#define el '\n'
#define pii pair<int, int>
const int MOD = 1e9 + 7;
#define all(x) (x).begin(), (x).end()
#define Sort(x)           sort(all(x))
#define Reverse(x)        reverse(all(x))

const int MAX = (1 << 20) + 5;
ll fact[MAX];

// Fungsi untuk menghitung pangkat dengan mod
ll powerr(ll x, ll y) {
    ll res = 1;
    while (y > 0) {
        if (y % 2 == 1) res = (res * x) % MOD;
        x = (x * x) % MOD;
        y /= 2;
    }
    return res;
}

// Fungsi untuk menghitung invers mod dari angka a
ll mod_inverse(ll a) {
    return powerr(a, MOD - 2);
}

// Prekomputasi faktorial untuk menghindari TLE
void precompute() {
    fact[0] = 1;
    for (int i = 1; i < MAX; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
}

// Fungsi untuk menghitung faktorial
ll factorial(ll x) {
    if (x < 0) return 0;
    return fact[x];
}

// Fungsi untuk menghitung permutasi P(n, r) = n! / (n - r)!
ll permutation(ll n, ll r) {
    if (r > n || r < 0) return 0;
    return (factorial(n) * mod_inverse(factorial(n - r))) % MOD;
}

void solve() {
    ll n, k; 
    cin >> n >> k;

    // Menghitung babak tertinggi yang bisa dicapai Astik
    ll r = 0;
    while ((1LL << (r + 1)) <= k) {
        r++;
    }
    r = min(n, r);
    ll highest_round = r + 1;

    // Menghitung banyak susunan yang memungkinkan Astik mencapai babak tertinggi
    ll total_participants = 1LL << n;
    ll required_weaker = (1LL << r) - 1;

    ll valid_permutations = total_participants % MOD;
    valid_permutations = (valid_permutations * permutation(k - 1, required_weaker)) % MOD;
    valid_permutations = (valid_permutations * factorial(total_participants - (1LL << r))) % MOD;

    cout << highest_round << " " << valid_permutations << el;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    precompute();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}