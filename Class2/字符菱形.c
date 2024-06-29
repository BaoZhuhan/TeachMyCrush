/*
 *
***
*****
 ***
  *
2空格+1星星
1空格+3星星
0空格+5星星
1空格+3星星
2空格+1星星
 */
 //首先我们说明一点：这道题目使用for循环是毫无必要的，但是使用for循环
 //可以提高我们分析问题的能力。
 //分析：空格的数量从2->0递减,星星的数量从1->5递增,然后反向。
#include <stdio.h>

int main(){
    int blank = 2;//空格
    int star = 1;
    //可以在for循环里面定义int i ,但是注意当循环结束，i也就消失了
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < blank; j++){
            printf(" ");//输出空格
        }
        for(int j = 0; j < star; j++){
            printf("*");//输出星星
        }
        printf("\n");//换行
        blank -= 1;
        star += 2;
    }
    blank += 1;
    star -= 2;
    for(int i = 0; i < 2;i++){
        for(int j = 0; j < blank; j++){
            printf(" ");
        }
        for(int j = 0; j < star; j++){
            printf("*");
        }
        printf("\n");
        blank += 1;
        star -= 2;
    }
    return 0;
}