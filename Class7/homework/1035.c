#include <stdio.h>

int main() {
    double res = 1 , n = 1, k;
    scanf( "%lf", &k );

    while (res <= k) {
        n++;
        res += (1.0 / n);
    }

    printf( "%1.0lf", n );

    return 0;
}