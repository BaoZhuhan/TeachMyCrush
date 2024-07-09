#include <stdio.h>

int main(){
    double s;
    scanf("%lf", &s);

    double length = 0;
    double feet = 2;
    int cot = 0;

    while(length < s){
        length += feet;
        cot++;
        feet = feet * 0.98;
    }

    printf("%d", cot);
    
    return 0;
}