#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    int mx, md, mn;
    mx = (a > b ? a : b);
    mx = (mx > c ? mx : c);

    mn = (a < b ? a : b);
    mn = (mn < c ? mn : c);

    md = a + b + c - mx - mn;

    if(mx - md - mn >= 0) {
        printf("Not triangle\n");
        return 0;
    }
    
    if(mn * mn + md * md == mx * mx) printf("Right triangle\n");
    if(mn * mn + md * md > mx * mx) printf("Acute triangle\n");
    if(mn * mn + md * md < mx * mx) printf("Obtuse triangle\n");
    if(mx == md || md == mn) printf("Isosceles triangle\n");
    if(mx == mn) printf("Equilateral triangle\n");
    
    return 0;
}