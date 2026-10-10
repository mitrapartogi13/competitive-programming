#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
    int r, g, b;
    cin >> r >> g >> b;
    
    // Array untuk memudahkan akses stok dan karakter warna
    int counts[3] = {r, g, b};
    char chars[3] = {'R', 'G', 'B'};
    
    string s = "";
    
    while (true) {
        int best_c = -1;
        
        // Cek ketiga warna: 0 (R), 1 (G), 2 (B)
        for (int c = 0; c < 3; c++) {
            if (counts[c] == 0) continue; // Stok habis
            
            int len = s.length();
            
            // Aturan 2: Tidak boleh sama dengan tetangga sebelah
            if (len >= 1 && chars[c] == s[len - 1]) continue;
            // Aturan 3: Tidak boleh sama dengan jarak 3
            if (len >= 3 && chars[c] == s[len - 3]) continue;
            
            // Logika Pemilihan Greedy
            if (best_c == -1) {
                best_c = c;
            } else if (counts[c] > counts[best_c]) {
                // Pilih stok terbanyak
                best_c = c;
            } else if (counts[c] == counts[best_c]) {
                // TIE-BREAKER: Jika stok sama, prioritaskan yang membentuk pola selang-seling
                if (len >= 2 && chars[c] == s[len - 2]) {
                    best_c = c;
                }
            }
        }
        
        // Jika tidak ada warna yang valid, pertarungan selesai
        if (best_c == -1) break;
        
        // Tambahkan karakter terpilih dan kurangi stok
        s += chars[best_c];
        counts[best_c]--;
    }
    
    cout << s << "\n";
}

int main() {
    // Optimasi Input/Output agar tidak kena Time Limit
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}