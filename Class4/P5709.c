#include <stdio.h>

int main(){
    int m,t,s;
    scanf("%d%d%d",&m,&t,&s);

    int less = m;
    if(t != 0) less -= (s+t-1)/t;
    else {
        if(s > 0) less = 0;
    }

    if(less <= 0){
        printf("0");
    }else{
        printf("%d",less);
    }
    return 0;
}