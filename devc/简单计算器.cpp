//习题6-7 简单计算器 
#include <stdio.h>

int main(){
	//提醒：注意题目中的加减乘除的优先级是一样的 
	int res = 0;
	char op;
	int num = 0;
	int flag = 1; //flag：0时输入数字，1时输入运算符 
	
	//输入第一个数字作为res的初始值
	scanf("%d" , &res);
	
	//循环输入 
	while(1){
		if(flag == 0) {
			scanf("%d" , num);
			
			if(op == '+') res = res + num;
			else if(op == '-') res = res - num;
			else if(op == '*') res = res * num;
			else if(op == '/' && num != 0) res = res / num;
			else{
				printf("ERROR");
				return 0;
			}
		}
		
		if(flag == 1) {
			op = getchar();
			if(op == '='){
				break;
			}
		}
		
		flag = (flag == 1 ? 0 : 1);
	}
	
	printf("%d" ,res);
	
	return 0;
}
