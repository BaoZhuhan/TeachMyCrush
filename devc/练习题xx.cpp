#include <stdio.h>

int main(){
	char str[1005];
	int i = 0 ;
	while((str[i] = getchar()) != '\n'){
		i++;
	}
	str[i] = '\0';
	int len = i;
	
	for(int i = len -1  ; i >= 0 ; i--){
		printf("%c" ,str[i]);
	}
	
	return 0;
} 
