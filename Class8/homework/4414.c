#include <stdio.h>

int main(){
    int n1,n2,n3;
    scanf("%d%d%d",&n1,&n2,&n3);
    getchar();
    char c1,c2,c3;
    scanf("%c%c%c",&c1,&c2,&c3);

    int a,b,c;
    a = (n1 < n2 ? n1 : n2);
    a = (a < n3 ? a : n3);
    c = (n1 > n2 ? n1 : n2);
    c = (c > n3 ? c : n3);
    b = n1 + n2 + n3 - a - c;

    switch(c1){
        case 'A' : printf("%d ",a);break;
        case 'B' : printf("%d ",b);break;
        case 'C' : printf("%d ",c);break;
    }
    switch(c2){
        case 'A' : printf("%d ",a);break;
        case 'B' : printf("%d ",b);break;
        case 'C' : printf("%d ",c);break;
    }
    switch(c3){
        case 'A' : printf("%d",a);break;
        case 'B' : printf("%d",b);break;
        case 'C' : printf("%d",c);break;
    }

    return 0;
}