#include <stdio.h>

int main(){
    int n , k ;
    scanf("%d%d", &n , &k);
    
    double cot_t = 0;
    double cot_f = 0;
    double sum_t = 0;
    double sum_f = 0;
    
    for(int i = 1 ;i <= n ; i++){
        if(i%k == 0){
            cot_t++;
            sum_t += i;
        }else{
            cot_f++;
            sum_f += i;
        }    
    }
    
    printf("%.1lf %.1lf",(sum_t/cot_t), (sum_f/cot_f));
    
    return 0;
}