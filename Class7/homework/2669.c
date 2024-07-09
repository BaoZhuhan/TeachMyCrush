#include <stdio.h>

int main(){
    int k;
    scanf("%d",&k);

    int sum = 0;
    int cot = 0;

    for(int i = 1; cot < k; i++){
        for(int j = 0 ; j < i && cot < k; j++){
            sum = sum + i;
            cot += 1;        
        }
    }

    printf("%d",sum);

    return 0;
}