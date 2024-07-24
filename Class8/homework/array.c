#include <stdio.h>

int fun(){
    //知道数组的数量大小12，还知道数组的内容 月份天数
    //int array_1[12] = { 31,28,....... };

    //知道数组的数量大小100，但是不知道数组的内容（要用户输入）
    int array_2[100];
    for(int i = 0; i < 100; i++){
        scanf("%d", array_2 + i); //&array_2[i] == a+i
    }

    //不知道数组的数量大小，也不知道数组的内容（两个都要用户输入）

    //1.查看数据范围，了解数组的最大大小 
    
    int array_3[(int)1e6] = {0};
    int n;
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i ++) {
        scanf("%d",array_3 + i );
    }
}

int main(){
    printf("%.30f" , 1.49);
    return 0;
}

