#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int mn = 1005;
    
    while(n--){
        int temp;
        scanf("%d",&temp);
        if(mn > temp) mn = temp;
    }
    
    printf("%d",mn);
    
    return 0;
}