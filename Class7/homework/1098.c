#include <stdio.h>

int main(){
    int n , x;
    scanf("%d%d",&n,&x);

    int cot = 0;
    for(int i = 1 ; i <= n ; i++){
        int tmp = i;//临时
        while(tmp != 0){
            if( tmp%10 == x) cot++;
            tmp = tmp/10;
        }
    }

    printf("%d",cot);

    return 0;
}