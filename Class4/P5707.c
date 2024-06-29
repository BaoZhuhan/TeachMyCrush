#include <stdio.h>

int main(){
    int s,v;
    scanf("%d%d",&s,&v);

    int cost = (s+v-1)/v;

    int time = (24*60 + 7*60 + 50 - cost) % (24*60);
    
    printf("%02d:%02d",time/60,time%60);
    
    return 0;
}