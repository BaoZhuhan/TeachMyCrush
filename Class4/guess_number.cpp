#include <stdio.h>

int main(){
    int target = 10;

    int guess = -1;
    scanf("%d", &guess);
    
    if(guess == target) {
        printf("AC");
    }else if(guess > target){
        printf("WA :Bigger than answer");
    }else{
        printf("WA :Smaller than answer");
    }

    return 0;
}

