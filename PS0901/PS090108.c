#include <stdio.h>
int main(void)
{
	int n,i=0,j,num[80];
	scanf("%d",&n);
	
	for(;n>0;) //除16 
	{
		num[i++]=n%16;
		n/=16;
	}
	char h[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	
	for(j=i-1;j>0;j--) //倒著印出 如果設j>=0 就會多印出- 
	{
		printf("%c-",h[num[j]]);  //用j的數字來指定h要印出多少 
	}
	printf("%c",h[num[0]]);  //最後再印出num[0] 
	return 0;	
} 
