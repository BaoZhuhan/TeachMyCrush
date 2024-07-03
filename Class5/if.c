#include<stdio.h>

int main() {
    int m, t, s;
    scanf( "%d %d %d", &m, &t, &s );

    int less = (t == 0 ? m : m - (s+t-1)/t );

    less = ((t == 0 && s > 0) ? 0 : less);


    printf("%d", (less <= 0 ? 0 : less));

    return 0;
}