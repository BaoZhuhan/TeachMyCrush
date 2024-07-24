#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[10005];
    int mx = 0, mn = 10;
    double res = 0;
    for(int i = 0;i < n;i++){
        scanf("%d", &a[i]);
        res += a[i];
        if(a[i] > mx){
            mx = a[i];
        }
        if(a[i] < mn){
            mn = a[i];
        }
    }

    res = res - mx - mn;
    
    printf("%.2f", res / (n - 2));

    return 0;
}