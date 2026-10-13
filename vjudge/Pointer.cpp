#include <bits/stdc++.h>
using namespace std;

void hitung(int *a, int *b){
    int c = *a;

    *a = *a + *b;
    *b = abs(c - *b);
}
int main(){
    int a, b; cin >> a >> b;
    
    hitung(&a,&b);

    cout << a << endl << b;
}