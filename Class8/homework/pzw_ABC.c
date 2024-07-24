#include<stdio.h>

int main(){
    int m, n, p, x, max, min, mid;
    scanf("%d%d%d", &m, &n, &p);
    x = (n > p ? n : p);
    max = (m > x ? m : x);
    x = (m < n ? m : n);
    min = (p < x ? p : x);
    mid = m + n + p - min - max;


    char a;
    for(int i = 0;i <= 3;i++){
        scanf("%c", &a);

        if(a == "A") printf("%d ", min);
        else if(a == "B") printf("%d ", mid);
        else printf("%d", max);

    }

    return 0;
}