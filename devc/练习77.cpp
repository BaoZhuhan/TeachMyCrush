#include <stdio.h>

int main(){
	int n ;
	scanf("%d" , &n);
	
	int a[15][15];
	int res = 0;
	
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			scanf("%d" , &a[i][j]);
		}
	}
	
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++) {
			if(i + j == n - 1) continue; //���Խ��� 
			if(i == n -1 || j == n-1 ) continue ; //���һ��/��
			res += a[i][j]; 
		}
	} 
	
	printf("%d" , res);
 	return 0;	
} 
