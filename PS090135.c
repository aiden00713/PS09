#include <stdio.h>
int main(void)
{
//int num[13]={0,1る,2る,3る,4る,5る,6る,7る,8る,9る,10る,11る,12る};
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
