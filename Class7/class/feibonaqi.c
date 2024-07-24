#include <stdio.h>

int main(){
    long long feb[53] = {0};
    feb[1] = feb[2] = 1;
    feb[0] = 0;
    int n ;
    scanf("%d" ,&n);

    for(int i =3 ; i <= n ; i++){
        feb[i] = feb[i-1] + feb[i-2];
    }

    printf("%lld.00" , feb[n]);
    return 0;
}