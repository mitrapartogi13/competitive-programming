#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;

using pii = pair<int, int>;
using pll = pair<ll, ll>;

constexpr int MOD = 1'000'000'007;

#define all(x) (x).begin(), (x).end()

void solve() {
    // ll a = 1,b = 10,c = 100,d = 1000,e = 100000;
    // ofstream out("file.txt");
    // for (int i = 0; i < 50000; ++i) {
    // a = llabs(a - 2);
    // b = llabs(b - 2);
    // c = llabs(c - 2);
    // d = llabs(d - 2);
    // e = llabs(e - 2);
    // out << a << " " << b << " " << c << " " << d << " " << e << "\n";
    // }
    
    // ll n; cin >> n;
    // vector<int> arr(n);
    // ll ganjil = 0, genap_gj = 0, genap_gn = 0;
    // for (int i = 0; i < n; ++i) {
    //     cin >> arr[i];

    //     if (arr[i] % 2 == 1){
    //         ganjil++;
    //     } else if (arr[i] % 2 == 0 && (arr[i] / 2) % 2 == 0){
    //         genap_gn++;
    //     } else if (arr[i] % 2 == 0 && (arr[i] / 2) % 2 == 1){
    //         genap_gj++;
    //     }
    // }

    // cout << max(max(ganjil,genap_gj), genap_gn) << '\n';

    for (int i = 0; i < 5; ++i) {
        cout << i << ' ';
    }


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}