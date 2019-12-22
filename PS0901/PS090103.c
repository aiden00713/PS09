#include <stdio.h>
int main(void)
{
	int i,n,end,j=0;
	int num[80];
	for(i=0;i<80;i++)
	{	
		scanf("%d",&num[i]);
		
		if(num[i]==0)
			break;
	}
	end=i;
	scanf("%d",&n);
	for(i=0;i<end;i++)
	{
		if(num[i]==n)
			j++;
	}
	printf("%d",j);
	return 0;
 } 
