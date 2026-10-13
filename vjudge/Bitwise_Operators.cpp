#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

void calculate_the_maximum(long long n, long long k) {
    long long max_and = 0, max_or = 0, max_xor = 0;
    for (long long i = 1; i <= n; ++i) {
        for (long long j = 1; j <= k; ++j) {
            if (i == j) continue;
            long long r1 = i & j;
            long long r2 = i | j;
            long long r3 = i ^ j;

            if (r1 < k && r1 > max_and) max_and = r1;
            if (r2 < k && r2 > max_or) max_or = r2;
            if (r3 < k && r3 > max_xor)  max_xor = r3;


            // printf("%lld and %lld = %lld\n", i,j, max_and);
            // printf("%lld  or %lld = %lld\n", i,j, max_or);
            // printf("%lld xor %lld = %lld\n", i,j, max_xor);
                

        }
    }

    printf("%lld\n%lld\n%lld", max_and, max_or, max_xor);
    
}

int main() {
    long long n, k;
  
    scanf("%lld %lld", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
