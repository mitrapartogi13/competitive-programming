#include <bits/stdc++.h>
using namespace std;


void tukar_alias(int &x, int &y){ // ini pakai alias yang hanya tersedia pada C++, tidak membuat variabel baru hanya alias
    int t = y;
    y = x;
    x = t;
}

void tukar(int *x, int *y){ // ini pakai pointer yang tersedia juga di C
    int t = *y;
    *y = *x;
    *x = t;
}

int main(void)
{
    // ini coba alias

    // int x = 1, y = 2;

    // tukar_alias(x,y); // alias
    // tukar(&x,&y); // pointer

    // cout << x << " " << y;

    int a[3] = {1, 2, 3};
    int *p = a;
    p++;
    *p = 20;
    int &r = a[2];
    r = 30;
    cout << a[0] << " " << a[1] << " " << a[2];
}