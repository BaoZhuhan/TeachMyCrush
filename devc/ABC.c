#include<stdio.h>

int main(){
    int m, n, p, x, max, min, mid;
    scanf("%d%d%d", &m, &n, &p);
    x = (n > p ? n : p);
    max = (m > x ? m : x);
    x = (m < n ? m : n);
    min = (p < x ? p : x);
    mid = m + n + p - min - max;
	
	//�������� , max ->mx , min ->mn , mid ->md;
	//max()��һ�����뺯���������ҵ�����ֵ�еĸ���ֵ
	//min()��һ�����뺯���������ҵ�����ֵ�еĸ�Сֵ
	
	 
	//"A" == 'A' + '\0'
	//'A' == 'A'
	
    char a;
    scanf("%c",&a); // get the '\n'
    
        
	scanf("%c", &a);
		
    if(a == 'A') printf("%d ", min);
    else if(a == 'B') printf("%d ", mid);
    else if(a == 'C') printf("%d ", max);
    
    scanf("%c", &a);
		
    if(a == 'A') printf("%d ", min);
    else if(a == 'B') printf("%d ", mid);
    else if(a == 'C') printf("%d ", max);
    
    scanf("%c", &a);
		
    if(a == 'A') printf("%d", min);
    else if(a == 'B') printf("%d", mid);
    else if(a == 'C') printf("%d", max);


    return 0;
}

