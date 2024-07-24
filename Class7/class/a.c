#include <stdio.h>
#include <string.h>

int main(){
    char a[1000] = {0};
    strcpy(a,"abcdefg");

    strcpy(a , a+1);
    printf("%s\n" , a);

    return 0;
}