#include <stdio.h>
#include <string.h>

int main(){
	//��ȡĿ�� 
	char target;
	target = getchar();
	
	//��ȡ���з� 
	getchar();
	
	//��ȡ���� 
	char str[105];
	memset(str , 0 , 105);
	int i = 0; 
	while((str[i] = getchar()) != '\n'){
		i++;
	} 
	str[i] = '\0';
	
	int loc = -1; 
	//ѭ���ַ������ҵ�����¼loc 
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
