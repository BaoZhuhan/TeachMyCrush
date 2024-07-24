#include <stdio.h>

int main(){
    //建立已知数组方式
    int a[2][2] = {1,2,3,4};
    int b[2][2] = {{1,2},{3,4}};
    //知道行数列数知道每个数
    int a[4][4];
    for(int i = 0 ;i < 4 ;i++){
        for(int j = 0 ; j < 4 ;j++){
            a[i][j] = 1;
        }
    }

    //不知道行数列数，去看范围大小，假设是100；
    //统一用m代表行，n代表列
    int a[105][105] = {0};

    int n , m;
    scanf("%d%d" ,&n ,&m );

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++) {
            scanf("%d" , &a[n][m]);
        }
    }

    //探究二维数组的地址关系：
    // 取值a[i][j]
    // 取地址&a[i][j]
    // 在j = 0的前提下  a+i 等同于 &a[i][j]
    // 在j = 0的前提下  **(a+i) 等同于 a[i][j] 

    return 0;
}