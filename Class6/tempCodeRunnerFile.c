#include <stdio.h>

int main(){
    float m , h ;

    scanf("%f%f",&m,&h);

    float bmi = m/(h*h);

    if(bmi < 18.5) printf("Underweight");
    else if(bmi < 24.5) printf("Normal");
    else printf("%6f\nOverweight",bmi);

    return 0;
}