#include <stdio.h>
#include <string.h>
//在本题中我希望展示函数式编程,这是我很喜欢的编程范式，就是将一些抽象的功能做成函数 

//这个函数用来输入一行字符串 
void get_input(char *str){
	int i = 0;
	while((str[i] = getchar()) != '\n'){
		i++;
	}
	str[i] = '\0';
}

//检查是否大写 
int is_uppercase(char c) {
	if(c >= 'A' && c <= 'Z') return 1;
	else return 0;
}

//检查是否小写 
int is_lowercase(char c){
	if(c >= 'a' && c <= 'z' ) return 1;
	else return 0; 
}

//用来检查一个字符是否是英文字符 
int is_word(char c){
	if(is_uppercase(c) || is_lowercase(c) ) return 1;
	else return 0;
}

//用来转换大小写英文字符 
char change_case(char c){
	if(is_word(c)){
		if(is_uppercase(c)) c = c - 'A' + 'a';
		else c = c - 'a' + 'A';
	} 
	return c;
}

//用于向后移动一位字母 
char backword(char c){
	if(is_word(c)){
		if(is_uppercase(c)) c = (c - 'A' + 1)%26 + 'A';
		else c = (c - 'a' + 1)%26 + 'a'; 
 	}
	return c;
}


int main(){
	char str[105];
	memset(str,0,105);
	
	get_input(str);
	
	for(int i = 0 ; str[i] != '\0' ; i++){
		if(is_word(str[i])){
			str[i] = change_case(str[i]);
			str[i] = backword(str[i]);
		}
	}
	
	printf("%s" ,str);
	
	return 0;
}
