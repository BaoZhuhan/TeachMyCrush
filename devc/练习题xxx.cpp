#include <stdio.h>

int main(){
	int n ;
	scanf("%d" , &n);
	
	getchar();//��ȡ���з� 
	char str[100005];
	int res[10] = {0} ; //res�����¼ÿ�����ֳ��ֵĴ��� 
	
	//�˹��Ļ�ȡһ���ַ������� 
	int i = 0 ;
	while((str[i] = getchar()) != '\n'){
		i++;
	}
	str[i] = '\0';
	
	int mx = 0;
	for(int i = 0 ; str[i] != '\0'; i ++){
		if(str[i] == ' ') continue; //����ǿո����������¼ 
		int num = str[i] - '0';
		
		res[num]++;
		if(res[num] > mx) mx = res[num]; //��¼������ 
	}
	
	printf("%d:" ,mx);
	
	for(int i = 0 ; i < 10 ; i++){
		if(res[i] == mx) printf(" %d" , i);
	} 
	
	return 0;
}
