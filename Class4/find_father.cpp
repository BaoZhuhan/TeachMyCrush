#include <stdio.h>

int main() {
    int x = 1, y = 1;

    if (x == 2) y = 0;
    if (x > 2) y = 3;
    else y = 4;

    if (x == 1)
    if (y == 3) y = 4;
    else y = 5;
    else y = 6;

    printf( "%d", y );
    return 0;
}