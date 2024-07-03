#include <stdio.h>

int main() {
    int target = 10;

    int guess = -1;
    scanf( "%d", &guess );

    if(target == guess){
        printf("AC");
        return 0;
    }

    printf("WA");

    return 0;
}


