// ============================================================
//  BITMASK CHEAT SHEET  (C++17)
//  Berisi: operasi dasar, trik bit, builtin GCC, subset
//  enumeration, SOS DP, TSP bitmask DP, XOR tricks, dll.
//  Compile: g++ -std=c++17 -O2 bitmask.cpp -o bitmask && ./bitmask
// ============================================================
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

// ------------------------------------------------------------
// 0. RINGKASAN OPERATOR
//   &  AND   : 1 jika kedua bit 1
//   |  OR    : 1 jika salah satu bit 1
//   ^  XOR   : 1 jika bit berbeda
//   ~  NOT   : membalik semua bit
//   << shift kiri  : x << k  == x * 2^k
//   >> shift kanan : x >> k  == floor(x / 2^k)
//
//   PENTING:
//   - Gunakan 1LL << k (atau 1ULL) jika k >= 31, kalau tidak overflow int.
//   - Prioritas operator: == lebih tinggi dari &, |, ^  -> selalu pakai kurung!
//       salah: if (x & 1 == 0)     benar: if ((x & 1) == 0)
//   - Shift >= lebar tipe (mis. 1 << 32 pada int) = undefined behavior.
//   - Shift kanan bilangan negatif = implementation-defined (umumnya aritmetik).
// ------------------------------------------------------------

// ------------------------------------------------------------
// 1. OPERASI DASAR PER BIT (indeks bit mulai dari 0 = LSB)
// ------------------------------------------------------------
inline bool getBit(ll x, int i)   { return (x >> i) & 1; }
inline ll   setBit(ll x, int i)   { return x | (1LL << i); }
inline ll   clearBit(ll x, int i) { return x & ~(1LL << i); }
inline ll   flipBit(ll x, int i)  { return x ^ (1LL << i); }
inline ll   assignBit(ll x, int i, bool v) { return (x & ~(1LL << i)) | ((ll)v << i); }

// ------------------------------------------------------------
// 2. TRIK KLASIK
// ------------------------------------------------------------
inline bool isOdd(ll x)        { return x & 1; }
inline bool isPowerOfTwo(ll x) { return x > 0 && (x & (x - 1)) == 0; }
// x & (x-1)  : mematikan bit 1 paling rendah (LSB yang menyala)
inline ll   dropLowestSetBit(ll x) { return x & (x - 1); }
// x & -x     : mengambil HANYA bit 1 paling rendah (dipakai di Fenwick Tree)
inline ll   lowbit(ll x)       { return x & -x; }
// x | (x+1)  : menyalakan bit 0 paling rendah
// x & (x+1)  : mematikan trailing ones
// x | (x-1)  : menyalakan semua trailing zeros
// ~x & (x+1) : isolasi bit 0 paling rendah
// mask n bit rendah: (1LL << n) - 1
inline ll   lowMask(int n)     { return (1LL << n) - 1; }
// swap tanpa temp:  a ^= b; b ^= a; a ^= b;
// negatif (two's complement): -x == ~x + 1
// abs tanpa branch (int 32): (x ^ (x >> 31)) - (x >> 31)
// min/max tanpa branch: b ^ ((a ^ b) & -(a < b))  -> max(a,b)
// rata-rata aman overflow:  (a & b) + ((a ^ b) >> 1)
// x kelipatan 2^k ?  (x & ((1LL<<k)-1)) == 0
// x mod 2^k       :  x & ((1LL<<k)-1)
// bagi 2^k        :  x >> k
// tanda sama?     :  (a ^ b) >= 0

// ------------------------------------------------------------
// 3. BUILTIN GCC  (versi ll: tambahkan suffix 'll')
//   __builtin_popcount(x)    jumlah bit 1
//   __builtin_clz(x)         leading zeros   (undefined jika x==0)
//   __builtin_ctz(x)         trailing zeros  (undefined jika x==0)
//   __builtin_ffs(x)         posisi bit 1 terendah (1-indexed), 0 jika x==0
//   __builtin_parity(x)      paritas jumlah bit 1
//   C++20 <bit>: std::popcount, std::countl_zero, std::countr_zero,
//                std::bit_width, std::bit_floor, std::bit_ceil, std::has_single_bit
// ------------------------------------------------------------
inline int popcnt(ll x)  { return __builtin_popcountll(x); }
inline int msb(ll x)     { return 63 - __builtin_clzll(x); }   // indeks bit tertinggi, x>0
inline int lsb(ll x)     { return __builtin_ctzll(x); }        // indeks bit terendah, x>0
inline int bitLen(ll x)  { return x ? 64 - __builtin_clzll(x) : 0; }
inline int floorLog2(ll x) { return msb(x); }
inline int ceilLog2(ll x)  { return x <= 1 ? 0 : msb(x - 1) + 1; }
// pangkat 2 terkecil >= x
inline ll  nextPow2(ll x)  { return x <= 1 ? 1 : 1LL << (msb(x - 1) + 1); }

// ------------------------------------------------------------
// 4. ITERASI BIT YANG MENYALA  -> O(popcount), bukan O(n)
// ------------------------------------------------------------
vector<int> setBits(ll mask) {
    vector<int> res;
    for (ll m = mask; m; m &= m - 1) res.push_back(__builtin_ctzll(m));
    return res;
}

// ------------------------------------------------------------
// 5. ENUMERASI SUBSET
//   a) semua subset dari himpunan {0..n-1}      : 2^n
//   b) semua submask dari mask (tanpa 0 dulu)    : 2^popcount(mask)
//   c) semua submask dari semua mask             : 3^n total
//   d) semua mask dengan tepat k bit (Gosper)    : C(n,k)
// ------------------------------------------------------------
string maskToStr(ll mask, int n) {
    string s = "{";
    bool first = true;
    for (int i = 0; i < n; i++)
        if (mask >> i & 1) { if (!first) s += ","; s += to_string(i); first = false; }
    return s + "}";
}

void demoSubsets() {
    int n = 3;
    cout << "Semua subset n=3: ";
    for (int m = 0; m < (1 << n); m++) cout << maskToStr(m, n) << ' ';
    cout << '\n';

    int mask = 0b1011;
    cout << "Submask dari 1011 (besar->kecil): ";
    for (int sub = mask; ; sub = (sub - 1) & mask) {   // pola standar
        cout << bitset<4>(sub) << ' ';
        if (sub == 0) break;                           // jangan lupa submask kosong
    }
    cout << '\n';

    // Gosper's hack: mask berikutnya dengan jumlah bit sama (lebih besar)
    int N = 5, k = 3;
    cout << "Mask 5 bit dengan 3 bit menyala: ";
    for (int m = (1 << k) - 1; m < (1 << N); ) {
        cout << bitset<5>(m) << ' ';
        int c = m & -m, r = m + c;
        m = (((r ^ m) >> 2) / c) | r;
    }
    cout << '\n';
}

// ------------------------------------------------------------
// 6. OPERASI HIMPUNAN DENGAN BITMASK (n <= 64)
//   gabungan     A | B          irisan        A & B
//   selisih      A & ~B         sym. diff     A ^ B
//   komplemen    ~A & full      A subset B?   (A & B) == A  atau (A | B) == B
//   saling lepas (A & B) == 0   anggota i?    A >> i & 1
//   ukuran       popcount(A)    himpunan penuh (1<<n)-1
// ------------------------------------------------------------

// ------------------------------------------------------------
// 7. XOR TRICKS
//   a ^ a = 0,  a ^ 0 = a,  komutatif & asosiatif
//   - cari angka tunggal di array (lainnya muncul 2x): XOR semua
//   - dua angka tunggal: XOR semua = a^b, pisah berdasar lowbit(a^b)
//   - prefix xor: xor(l..r) = P[r] ^ P[l-1]
//   - XOR 0..n dalam O(1) (lihat xorUpTo)
//   - maksimum XOR pasangan: trie biner (lihat MaxXorTrie)
//   - subset XOR basis (linear basis) (lihat XorBasis)
// ------------------------------------------------------------
ll xorUpTo(ll n) {            // 0 ^ 1 ^ ... ^ n
    switch (n & 3) {
        case 0: return n;
        case 1: return 1;
        case 2: return n + 1;
        default: return 0;
    }
}

pair<int,int> twoSingles(const vector<int>& a) {
    int x = 0;
    for (int v : a) x ^= v;
    int low = x & -x, p = 0, q = 0;
    for (int v : a) (v & low ? p : q) ^= v;
    return {p, q};
}

struct MaxXorTrie {           // maksimum a[i]^a[j], bit 0..B-1
    static const int B = 30;
    vector<array<int,2>> t{{-1, -1}};
    void insert(int x) {
        int u = 0;
        for (int b = B - 1; b >= 0; b--) {
            int c = x >> b & 1;
            if (t[u][c] < 0) { t[u][c] = t.size(); t.push_back({-1, -1}); }
            u = t[u][c];
        }
    }
    int query(int x) {        // cari y di trie yang memaksimalkan x^y
        int u = 0, res = 0;
        for (int b = B - 1; b >= 0; b--) {
            int c = (x >> b & 1) ^ 1;
            if (t[u][c] >= 0) { res |= 1 << b; u = t[u][c]; }
            else u = t[u][c ^ 1];
        }
        return res;
    }
};

struct XorBasis {             // linear basis: XOR maksimum dari subset mana pun
    ll b[63] = {};
    bool insert(ll x) {
        for (int i = 62; i >= 0; i--) {
            if (!(x >> i & 1)) continue;
            if (!b[i]) { b[i] = x; return true; }
            x ^= b[i];
        }
        return false;         // x bisa dibentuk dari basis yang ada
    }
    ll maxXor() { ll r = 0; for (int i = 62; i >= 0; i--) r = max(r, r ^ b[i]); return r; }
};

// ------------------------------------------------------------
// 8. GRAY CODE & BIT REVERSAL
//   gray(i) = i ^ (i >> 1)  -> dua angka berurutan beda tepat 1 bit
//   invers  : g ^= g>>1; g ^= g>>2; g ^= g>>4; ... (prefix xor)
// ------------------------------------------------------------
inline ll gray(ll i) { return i ^ (i >> 1); }
inline ll invGray(ll g) { ll r = 0; for (; g; g >>= 1) r ^= g; return r; }

ull reverseBits64(ull x) {
    x = ((x >> 1) & 0x5555555555555555ULL) | ((x & 0x5555555555555555ULL) << 1);
    x = ((x >> 2) & 0x3333333333333333ULL) | ((x & 0x3333333333333333ULL) << 2);
    x = ((x >> 4) & 0x0F0F0F0F0F0F0F0FULL) | ((x & 0x0F0F0F0F0F0F0F0FULL) << 4);
    return __builtin_bswap64(x);
}

// ------------------------------------------------------------
// 9. DP BITMASK
// ------------------------------------------------------------
// 9a. TSP / Hamiltonian cycle  O(2^n * n^2)
//     dp[mask][i] = biaya minimum mengunjungi himpunan mask, berakhir di i
ll tsp(const vector<vector<ll>>& d) {
    int n = d.size();
    const ll INF = LLONG_MAX / 4;
    vector<vector<ll>> dp(1 << n, vector<ll>(n, INF));
    dp[1][0] = 0;                                  // mulai dari kota 0
    for (int mask = 1; mask < (1 << n); mask++) {
        if (!(mask & 1)) continue;
        for (int i = 0; i < n; i++) {
            if (!(mask >> i & 1) || dp[mask][i] >= INF) continue;
            for (int j = 0; j < n; j++) {
                if (mask >> j & 1) continue;
                int nm = mask | (1 << j);
                dp[nm][j] = min(dp[nm][j], dp[mask][i] + d[i][j]);
            }
        }
    }
    ll ans = INF;
    for (int i = 1; i < n; i++) ans = min(ans, dp[(1 << n) - 1][i] + d[i][0]);
    return ans;
}

// 9b. Assignment problem: n orang -> n tugas, biaya minimum  O(2^n * n)
//     orang ke-popcount(mask) mengambil tugas baru
ll assignment(const vector<vector<ll>>& c) {
    int n = c.size();
    const ll INF = LLONG_MAX / 4;
    vector<ll> dp(1 << n, INF);
    dp[0] = 0;
    for (int mask = 0; mask < (1 << n); mask++) {
        if (dp[mask] >= INF) continue;
        int person = __builtin_popcount(mask);
        if (person >= n) continue;
        for (int job = 0; job < n; job++)
            if (!(mask >> job & 1))
                dp[mask | 1 << job] = min(dp[mask | 1 << job], dp[mask] + c[person][job]);
    }
    return dp[(1 << n) - 1];
}

// 9c. SOS DP (Sum Over Subsets)  O(n * 2^n)
//     f[mask] = sum a[sub] untuk semua sub subset dari mask
vector<ll> sosSubset(vector<ll> a, int n) {
    for (int i = 0; i < n; i++)
        for (int mask = 0; mask < (1 << n); mask++)
            if (mask >> i & 1) a[mask] += a[mask ^ (1 << i)];
    return a;
}
// varian superset: iterasi sama, tapi if (!(mask>>i&1)) a[mask] += a[mask|1<<i]
vector<ll> sosSuperset(vector<ll> a, int n) {
    for (int i = 0; i < n; i++)
        for (int mask = 0; mask < (1 << n); mask++)
            if (!(mask >> i & 1)) a[mask] += a[mask | (1 << i)];
    return a;
}

// 9d. Partisi himpunan: dp[mask] = min over submask  O(3^n)
//     contoh: bagi n item ke grup2 (tiap grup berbiaya cost[sub]), minimalkan total
ll partitionDP(const vector<ll>& cost, int n) {
    const ll INF = LLONG_MAX / 4;
    vector<ll> dp(1 << n, INF);
    dp[0] = 0;
    for (int mask = 1; mask < (1 << n); mask++) {
        int low = mask & -mask;                    // paksa grup memuat elemen terendah
        for (int sub = mask; sub; sub = (sub - 1) & mask)
            if (sub & low) dp[mask] = min(dp[mask], dp[mask ^ sub] + cost[sub]);
    }
    return dp[(1 << n) - 1];
}

// 9e. Meet in the middle subset sum: n ~ 40 -> 2 * 2^20
//     (pola: enumerasi 2^(n/2) subset dua belahan, lalu two-pointer / binary search)

// 9f. Broken profile / profile DP (grid): mask = status baris/kolom saat ini
//     contoh: hitung cara menutup grid n x m dengan domino 1x2.
ll dominoTilings(int n, int m) {
    // dp[mask] = jumlah cara; mask bit j = sel (baris sekarang, kolom j) sudah terisi
    vector<ll> dp(1 << m, 0), nd(1 << m);
    dp[0] = 1;
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < m; c++) {
            fill(nd.begin(), nd.end(), 0);
            for (int mask = 0; mask < (1 << m); mask++) {
                if (!dp[mask]) continue;
                if (mask >> c & 1) {               // sel sudah terisi domino vertikal dari atas
                    nd[mask ^ (1 << c)] += dp[mask];
                } else {
                    nd[mask | (1 << c)] += dp[mask];                       // domino vertikal ke bawah
                    if (c + 1 < m && !(mask >> (c + 1) & 1))
                        nd[mask | (1 << (c + 1))] += dp[mask];             // domino horizontal
                }
            }
            swap(dp, nd);
        }
    }
    return dp[0];
}

// ------------------------------------------------------------
// 10. POLA BERGUNA LAIN
// ------------------------------------------------------------
// 10a. Jumlah XOR / AND / OR pasangan: hitung per bit
//      sum_{i<j} (a_i ^ a_j) = sum_b 2^b * cnt1[b] * cnt0[b]
ll sumPairXor(const vector<ll>& a) {
    ll res = 0;
    for (int b = 0; b < 62; b++) {
        ll c1 = 0;
        for (ll v : a) c1 += v >> b & 1;
        res += (1LL << b) * c1 * ((ll)a.size() - c1);
    }
    return res;
}

// 10b. Jumlah bit 1 dari 0..n  (total popcount)
ll countBitsUpTo(ll n) {
    ll total = 0;
    for (int b = 0; (1LL << b) <= n; b++) {
        ll cycle = 1LL << (b + 1);
        total += (n + 1) / cycle * (cycle / 2) + max(0LL, (n + 1) % cycle - cycle / 2);
    }
    return total;
}

// 10c. Bitset sebagai "bitmask besar": percepat knapsack / reachability 64x
//      bitset<N> dp; dp[0]=1; for (w : items) dp |= dp << w;
//      fungsi: .count() .any() .none() ._Find_first() ._Find_next(i) .set() .reset() .flip()
int subsetSumReachable(const vector<int>& w, int target) {
    bitset<10001> dp;
    dp[0] = 1;
    for (int x : w) dp |= dp << x;
    return dp[target];
}

// 10d. Packing beberapa nilai kecil ke satu integer (hemat memori / hash state)
//      state = a | b << 4 | c << 8  ;  a = state & 15 ; b = state >> 4 & 15
//      Cocok untuk memoisasi state kecil jadi satu ll / key unordered_map.

// 10e. Trik tipe-aman: gunakan ull untuk shift kiri / aritmetika bit murni
//      agar tidak kena UB signed overflow.

// 10f. Hitung submask yang diinginkan: iterasi hanya mask yang valid
//      for (int m = 0; m < (1<<n); m++) if (ok[m]) ...

// 10g. Parity/pairing: mask genap-ganjil (mis. hitung substring dengan huruf
//      berfrekuensi genap): mask ^= 1 << (c - 'a'); hitung kemunculan mask
//      di prefix dengan map/array; pasangan mask sama -> substring valid.
ll countEvenSubstrings(const string& s) {
    vector<ll> cnt(1 << 26, 0);
    cnt[0] = 1;
    int mask = 0;
    ll res = 0;
    for (char ch : s) {
        mask ^= 1 << (ch - 'a');
        res += cnt[mask]++;
    }
    return res;
}

// ------------------------------------------------------------
// MAIN: demo + assert kecil
// ------------------------------------------------------------
int main() {
    // 1. dasar
    ll x = 0b101100;
    cout << "x=" << bitset<8>(x) << " bit2=" << getBit(x, 2)
         << " set0=" << bitset<8>(setBit(x, 0))
         << " clr2=" << bitset<8>(clearBit(x, 2))
         << " flip5=" << bitset<8>(flipBit(x, 5)) << '\n';

    // 2. trik
    assert(isPowerOfTwo(64) && !isPowerOfTwo(65) && !isPowerOfTwo(0));
    assert(lowbit(0b101000) == 0b1000);
    assert(dropLowestSetBit(0b101000) == 0b100000);
    assert(lowMask(5) == 31);

    // 3. builtin
    assert(popcnt(255) == 8 && msb(1000) == 9 && lsb(40) == 3);
    assert(ceilLog2(17) == 5 && nextPow2(17) == 32 && nextPow2(32) == 32);

    // 4. iterasi bit
    for (int b : setBits(0b100101)) cout << b << ' ';
    cout << "<- indeks bit menyala dari 100101\n";

    // 5. subset
    demoSubsets();

    // 7. XOR
    assert(xorUpTo(10) == (0^1^2^3^4^5^6^7^8^9^10));
    auto pr = twoSingles({1, 2, 3, 2, 1, 5});
    cout << "dua angka tunggal: " << min(pr.first, pr.second) << ' ' << max(pr.first, pr.second) << '\n';
    MaxXorTrie trie;
    vector<int> arr = {3, 10, 5, 25, 2, 8};
    int best = 0;
    for (int v : arr) { trie.insert(v); }
    for (int v : arr) best = max(best, trie.query(v));
    cout << "max xor pasangan: " << best << " (harusnya 28)\n";
    XorBasis xb;
    for (ll v : {1, 2, 4, 7}) xb.insert(v);
    cout << "max xor subset {1,2,4,7}: " << xb.maxXor() << '\n';

    // 8. gray code
    cout << "gray 0..7: ";
    for (int i = 0; i < 8; i++) cout << bitset<3>(gray(i)) << ' ';
    cout << '\n';
    assert(invGray(gray(12345)) == 12345);
    assert(reverseBits64(1ULL) == (1ULL << 63));

    // 9. DP
    vector<vector<ll>> d = {{0, 10, 15, 20}, {10, 0, 35, 25}, {15, 35, 0, 30}, {20, 25, 30, 0}};
    cout << "TSP: " << tsp(d) << " (harusnya 80)\n";
    vector<vector<ll>> c = {{9, 2, 7, 8}, {6, 4, 3, 7}, {5, 8, 1, 8}, {7, 6, 9, 4}};
    cout << "Assignment: " << assignment(c) << " (harusnya 13)\n";
    vector<ll> sos = sosSubset({1, 2, 3, 4, 5, 6, 7, 8}, 3);
    cout << "SOS f[7]=" << sos[7] << " (harusnya 36)\n";
    cout << "Domino 4x4: " << dominoTilings(4, 4) << " (harusnya 36)\n";

    // 10. lain-lain
    cout << "sum pair xor {1,2,3}: " << sumPairXor({1, 2, 3}) << " (harusnya 6)\n";
    cout << "total popcount 0..10: " << countBitsUpTo(10) << " (harusnya 17)\n";
    cout << "subset sum 11 dari {3,5,6}: " << subsetSumReachable({3, 5, 6}, 11) << " (harusnya 1)\n";
    cout << "substring freq genap 'abab': " << countEvenSubstrings("abab") << '\n';

    cout << "Semua assert lolos.\n";
    return 0;
}
