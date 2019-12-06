#include <stdio.h>
int main(void)
{
	int i,j;
	int num[80];
	for(i=0;i<80;i++)
	{
		scanf("%d",&num[i]);
		if(num[i]==0)
			break;
	}
	for(j=0;j<i;j++)
	{
		printf("%d ",num[j]);
	}
	num[j]=0;
	return 0;
}
