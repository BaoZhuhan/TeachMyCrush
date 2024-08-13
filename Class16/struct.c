#include <stdio.h>
#include <string.h>

//结构体
struct student{ 
    int score;//分数
    int rank; //排名
};

//主函数
int main(){
    int n;
    scanf("%d",&n);

    //使用malloc分配内存
    struct student *students;
    students = (struct student*)malloc(n * sizeof(struct student));

    for(int i = 0 ; i < n ; i++){
        scanf("%d%d" , &students[i].score , &students[i].rank);
    }

    return 0;
}