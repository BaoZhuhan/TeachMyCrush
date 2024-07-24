#include <stdio.h>

int fun1(int a,int b){
    a++;
    b++;
    return a+b;
}

int main(){
    int n1 = 1;
    int n2 = 2;

    fun1(n1,n2);
    
    
    fun1(n1,n2);


    return 0;
}
