#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    getchar(); // get the '\n'

    int a[105] = {0};
    int i = 0;
    while((a[i] = getchar()) != '\n'){
        i++;
    }
    a[i] = '\0';

    for(int i = 0; a[i] != '\0'; i++){
        a[i] = (char)((int)(a[i] - 'a' + n) % 26 + 'a');
        printf("%c", a[i]);
    }
    return 0;
}