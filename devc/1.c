#include <stdio.h>

void fun1(int n){
    int a = 0;
    for(int i = 0; i < n; i++){
        a += i;
    }
    return n;
}

void fun2(int n){
    int a = 1;
    for(int i = 0; i < 10; i++){
        a++;
    }
    return a;
}

void fun3(int n){
    int a = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            a++;
        }
    }
    return a;
}

void fun4(int n){
    int a = 0;
    for(int i = n; i >= 0; i /= 2){
        a++;
    }
    return a;
}

void fun5(int n){
    int a = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j += i){
            a++;
        }
    }
    return a;
}