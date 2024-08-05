#include <stdio.h>
#include <string.h>
//�ڱ�������ϣ��չʾ����ʽ���,�����Һ�ϲ���ı�̷�ʽ�����ǽ�һЩ����Ĺ������ɺ��� 

//���������������һ���ַ��� 
void get_input(char *str){
	int i = 0;
	while((str[i] = getchar()) != '\n'){
		i++;
	}
	str[i] = '\0';
}

//����Ƿ��д 
int is_uppercase(char c) {
	if(c >= 'A' && c <= 'Z') return 1;
	else return 0;
}

//����Ƿ�Сд 
int is_lowercase(char c){
	if(c >= 'a' && c <= 'z' ) return 1;
	else return 0; 
}

//�������һ���ַ��Ƿ���Ӣ���ַ� 
int is_word(char c){
	if(is_uppercase(c) || is_lowercase(c) ) return 1;
	else return 0;
}

//����ת����СдӢ���ַ� 
char change_case(char c){
	if(is_word(c)){
		if(is_uppercase(c)) c = c - 'A' + 'a';
		else c = c - 'a' + 'A';
	} 
	return c;
}

//��������ƶ�һλ��ĸ 
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
