#include <stdio.h>
#include <string.h>

int main(){
	//读取目标 
	char target;
	target = getchar();
	
	//读取换行符 
	getchar();
	
	//读取单词 
	char str[105];
	memset(str , 0 , 105);
	int i = 0; 
	while((str[i] = getchar()) != '\n'){
		i++;
	} 
	str[i] = '\0';
	
	int loc = -1; 
	//循环字符串，找到并记录loc 
	for(i = 0 ; str[i] != '\0' ; i++){
		if(str[i] == target) {
			loc = i;
		}
	}
	
	if(loc == -1) {
		printf("Not Found");
	}else{
		printf("index = %d" , loc);
	} 
	
	return 0; 
}
