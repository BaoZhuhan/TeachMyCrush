#include <stdio.h>

int main(){
    int a[2][3] = {1,2,3,4,5,6};
    //1 2 3
    //4 5 6
    //
    for(int i = 0 ; i < 2 ; i++) {
        for(int j = 0 ; j < 3; j++) {
            printf("value = %d , loc = %d \n" ,a[i][j] , &a[i][j]);
        }
    }

   
    return 0;


}
//a[3][3]
//(a[0])[]
//1 2 3
//4 5 6
//7 8 9 

