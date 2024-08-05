#include <stdio.h>
#include <string.h>

int main(){
    int a;
    char str[1005];
    int i = 0;
    while((str[i] = getchar()) != '\n'){
        i++;
    }
    str[i] = '\0';

    //strcpy(指向目的地字符串的指针,指向来源字符串的指针); //复制字符串
    strcpy(str_dest , str_src) ;
    //strcmp(字符串1指针，字符串2指针); //比较字符串，比较字符串的字典序,返回一个数字
    //小于0就是字符串1小于字符串2 ， 大于0就是。。。，等于就是两个字符串一样
    int res = strcmp(str1 , str2);
    //strlen(字符串); //返回字符串的长度，返回的长度不包括'\0'
    int n = strlen(str);
    
    //memset(字符串指针，值，长度); //重置字符串
    memset(str1 , 0 , 100);
}