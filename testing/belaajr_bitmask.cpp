#include <bits/stdc++.h>
using namespace std;
#define el '\n'
int main() {
    
    /* 
    
    Tujuan	                        Kode	              Penjelasan
    Cek bit i	                (x >> i) & 1	    Hasilnya 1 jika bit menyala
    Nyalakan bit i	            x |= (1 << i)	    OR dengan mask satu bit
    Matikan bit i	            x &= ~(1 << i)	    AND dengan kebalikan mask
    Balik bit i	                x ^= (1 << i)	        XOR membalik bit
    Cek bit i (alternatif)	    x & (1 << i)	    Hasil tidak nol jika menyala
    */

    // cek bit paling kanan (least significant bit)
    cout << (6 & 1) << el; 
    cout << (5 & 1) << el; 

    // cek tiap bit paling kanan
    int val = 14;
    for (int i = 0; i < 5; ++i) {
        cout << ((val >> i) & 1) << " ";
    }

    return 0;
}