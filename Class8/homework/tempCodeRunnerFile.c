#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int num1 , price1;
    scanf("%d%d",&num1,&price1);
    int num2 , price2;
    scanf("%d%d",&num1,&price1);
    int num3 , price3;
    scanf("%d%d",&num1,&price1);

    int res = 1e5+5;
    res = (((n+num1-1)/num1)*price1 < res ? ((n+num1-1)/num1)*price1 : res);
    res = (((n+num2-1)/num2)*price2 < res ? ((n+num2-1)/num2)*price2 : res);
    res = (((n+num3-1)/num3)*price3 < res ? ((n+num3-1)/num1)*price3 : res);
    
    printf("%d",res);
    return 0;
}