//ϰ��6-7 �򵥼����� 
#include <stdio.h>

int main(){
	//���ѣ�ע����Ŀ�еļӼ��˳������ȼ���һ���� 
	int res = 0;
	char op;
	int num = 0;
	int flag = 1; //flag��0ʱ�������֣�1ʱ��������� 
	
	//�����һ��������Ϊres�ĳ�ʼֵ
	scanf("%d" , &res);
	
	//ѭ������ 
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
