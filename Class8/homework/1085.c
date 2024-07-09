#include <stdio.h>

int main(){
    int class[7] = {0};
    
    int flag_happy = 1;
    int max_day = 0;

    for(int i = 0 ; i < 7 ;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        class[i] = a+b;
        
        if(class[i] > 8) flag_happy = 0;
        max_day = (class[i] > class[max_day] ? i : max_day);
    }

    if(flag_happy) printf("0");
    else printf("%d",max_day + 1);

    return 0;
}