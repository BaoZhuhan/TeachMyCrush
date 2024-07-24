#include <stdio.h>
#include <string.h>

int main(){
    char str[1005];
    int i = 0;
    while((str[i] = getchar()) != '\n'){
        i++;
    }
    str[i] = '\0';

    strcpy(); //复制字符串
    strcmp(); //比较字符串
    strlen(); //
    memset();
}