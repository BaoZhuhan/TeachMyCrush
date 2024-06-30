#include <stdio.h>

int main() {
    int x = -1;
    scanf( "%d", &x );

    switch (x) {
        case 1: printf( "x是1" ); break;
        case 2: printf( "x是2" ); break;
        case 3: printf( "x是3" ); break;
        case 4: printf( "x是4" ); break;
        case 5: printf( "x是5" ); break;
        default: printf( "x是%d", x );
    }
}