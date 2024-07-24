#include <stdio.h>

int sum_array(int a[] , int n){
    int sum = 0;
    for(int i = 0 ;i < n ; i++){
        sum += a[i];
    }
    return sum;
}

int main(){
    int n ;
    scanf("%d" , &n);
    int a[100005];
    for(int i = 0 ; i < n ; i++) {
        scanf("%d" , &a[i]);
    }

    printf("%d" , sum_array(a,n));
    return 0;
}