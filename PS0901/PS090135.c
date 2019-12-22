#include <stdio.h>
int main(void)
{
//int num[13]={0,1月,2月,3月,4月,5月,6月,7月,8月,9月,10月,11月,12月};
	int num[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int n,i=0;
	
	scanf("%d",&n);
	for(i=0;n>num[i];i++)
	{
		n-=num[i];
	}
	printf("%d %d",i,n);
	return 0;
}
