#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);

    int* a;
    a = (int*)malloc((n + 5) * sizeof(int));
    int* vis;
    vis = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        vis[i] = 0;
    }

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int res = 0;
    //A k= Bi + Cj; A = a[i]3, B = a[j]2
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j) continue;
            for(int k = 0; k < n; k++){
                if(i == k || j == k) continue;
                if(a[k] == a[i] + a[j]){
                    // printf("debug -->%d %d %d \n",a[i] , a[j] , a[k]);
                    vis[k] = 1;
                }
            }
        }
    }

    for(int i = 0; i < n; i++) if(vis[i] == 1) res++;

    printf("%d", res);

    return 0;
}