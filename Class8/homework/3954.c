#include <stdio.h>

int main(){
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    double res = a*0.2 + b*0.3 + c*0.5;
    printf("%.0lf",res);

    return 0;
}