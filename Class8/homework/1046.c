#include <stdio.h>

int main(){
    int tree[10];
    for(int i = 0 ; i < 10 ; i++){
        scanf("%d",&tree[i]);
    }

    int h;
    scanf("%d",&h);
    h += 30;

    int res = 0;
    for(int i = 0 ; i < 10 ;i++){
        if( h >= tree[i] ) res++;
    }

    printf("%d", res);

    return 0;
}