#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person{
    char name[15];
    int birth;
    char phone[25];
};

//选择排序，依据birht
void sort(struct person people[], int n){
    for(int i = 0; i < n; i++){
        int mn = i;;
        for(int j = i; j < n; j++){
            if(people[j].birth < people[mn].birth){
                mn = j;
            }
        }

        struct person temp = people[i];
        people[i] = people[mn];
        people[mn] = temp;
    }
}

//这个函数用来获取一行输入，并保存到结构体变量now中，然后返回now;
struct person getLine(){
    struct person now;

    //输入姓名
    int i = 0;
    while((now.name[i] = getchar()) != ' '){
        i++;
    }
    now.name[i] = '\0';

    //输入生日
    scanf("%d", &now.birth);
    getchar();//消化掉生日后面的空格

    //输入电话
    i = 0;
    while((now.phone[i] = getchar()) != '\n'){
        i++;
    }
    now.phone[i] = '\0';

    return now;
}

//initArray()函数动态生成一个数组并返回数组地址;
struct person* initArray(int len){
    struct person* people;
    people = (struct person*)malloc(len * sizeof(struct person));
    return people;
}

//getN()函数获取数字n
int getN(){
    int n;
    scanf("%d", &n);
    getchar();//消化掉换行符
    return n;
}

int main(){
    int n = getN();

    struct person* people = initArray(n);

    for(int i = 0; i < n; i++){
        people[i] = getLine();
    }

    sort(people, n);

    for(int i = 0; i < n; i++){
        printf("%s %d %s\n", people[i].name, people[i].birth, people[i].phone);
    }

    free(people);

    return 0;
}
