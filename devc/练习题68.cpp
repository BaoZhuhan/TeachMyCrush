#include <stdio.h>
#include <string.h>

int main(){
	//����һ���ַ���������
	char str[1005];
	memset(str,0,1005);
	
	int i = 0 ;
	while((str[i] = getchar()) != '\n'){
		i++;
	}
	str[i] = '\0';
	
	//���⴦���һ�����ʵ�����ĸ
	if(str[0] >= 'a' && str[0] <= 'z') { 
		str[0] = str[0] - 'a' + 'A';
	} 
	//�����ַ���
	for(i = 1 ; str[i] != '\0' ; i++){
		if(str[i-1] == ' ' && str[i] >= 'a' && str[i] <= 'z'){
			str[i] = str[i] - 'a' + 'A';
		}
	} 
	
	printf("%s" , str);
	
	return 0;
}
