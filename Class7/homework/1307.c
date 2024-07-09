#include <stdio.h>

int main() {
    int n;
    scanf( "%d", &n );

    if (n == 0) {
        printf( "0" );
        return 0;
    }

    int flag = (n > 0) ? 1 : 0;
    if (n < 0) n = -1 * n;

    int new_n = 0;
    while (n != 0) {
        new_n *= 10;
        new_n += (n % 10);
        n /= 10;
    }

    if (!flag) printf( "-" );
    printf( "%d", new_n );

    return 0;
}