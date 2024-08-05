#include <stdio.h>

int main(){
	int n ;
	scanf("%d" , &n);
	
	getchar();//获取换行符 
	char str[100005];
	int res[10] = {0} ; //res数组记录每个数字出现的次数 
	
	//八股文获取一行字符串输入 
	int i = 0 ;
	while((str[i] = getchar()) != '\n'){
		i++;
	}
	str[i] = '\0';
	
	int mx = 0;
	for(int i = 0 ; str[i] != '\0'; i ++){
		if(str[i] == ' ') continue; //如果是空格就跳过不记录 
		int num = str[i] - '0';
		
		res[num]++;
		if(res[num] > mx) mx = res[num]; //记录最大次数 
	}
	
	printf("%d:" ,mx);
	
	for(int i = 0 ; i < 10 ; i++){
		if(res[i] == mx) printf(" %d" , i);
	} 
	
	return 0;
}
