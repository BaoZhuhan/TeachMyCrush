#include <stdio.h>
#include <string.h>

int main(){
    //字符串就是字符数组，且有特殊规定，末尾必须是'\0'
    char a[6] = {'a','b','c','d','e','\0'};
    char *b = "abcde";
    
    //getchar()函数
    getchar(); //会读取一个char字符
    char c;
    c = getchar(); //读取一个字符存放到c里面
    c = getchar(); //赋值表达式的值等于赋值本身，所以该表达式的值就是getchar()
    
    //背八股文；
    //读取一行字符串，不知道具体长度是多少,知道最大长度是10000
    char str[10005];

    int i = 0 ;
    while((str[i] = getchar()) != '\n'){
        i++;
    }
    str[i] = '\0';
    
    //循环一个字符串,不知道长度
    for(int i = 0 ; str[i] != '\0' ; i++){

    }
    //怎么输出字符串
    printf("%s" , str);

    //字符串的操作函数
    //头文件导入 string.h
    //复制字符串 strcpy(目标字符数组，复制的来源)
    
    //strcpy小寄巧1： 创建字符串，内容已知
    char p[10000];
    strcpy(p , "pzw&bzh");

    //strcpy小寄巧2： 删掉头部的前n个值
    int n = 1;//n的值随便
    strcpy(p,p+n) ;  

    //


    return 0;
}