#include<stdio.h>

int main(){
    int a, b, sta = 0;
    int max = 0, day = 0;

    for(int i = 1;i <= 7;i++){
        scanf("%d%d", &a, &b);
        if(a + b > 8) sta++;
        if(a + b > max){
            max = a + b;
            day = i;
        }
    }

    if(sta == 0) printf("0");
    else printf("%d" ,day);
    
    return 0;
}
