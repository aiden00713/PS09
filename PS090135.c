#include <stdio.h>
int main(void)
{
//int num[13]={0,1��,2��,3��,4��,5��,6��,7��,8��,9��,10��,11��,12��};
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
