#include <stdio.h>

int main() {
    //已知字符串的定义
    char str1[] = "abcd";

    //未知字符串的定义
    const int MAX_SIZE;
    char* str2;
    str2 = (char*)malloc( MAX_SIZE * sizeof( char ) ); 
    int i = 0;
    while ((str2[i] = getchar()) != '\n') {
        i++;
    }
    str2[i] = '\0';

    return 0;
}