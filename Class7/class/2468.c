#include <stdio.h>

int main() {
    float a, b, c;
    a = 1.345;
    b = 1.123;

    c = a + b;

    if (c == 2.468) {
        printf( "same" );
    }
    else {
        printf( "%.10f , %.5f", c, c );
    }

    // long long l = 1;
    // float d = 2.0;
    // printf("%f\n",l+d);
    

    return 0;
}