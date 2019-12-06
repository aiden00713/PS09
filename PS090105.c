#include <stdio.h>
int main(void) 
{ 
	int i,j=0,end,n;
	int a[20];
	for(i=0;i<20;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)
			break;
	}
	end=i;
	scanf("%d",&n);
	if(n>=end)
	{
		printf("NO");
	}
	else
	{
		for(i=0;i<end;i++)
		{
				if(i==n)
				printf("%d",a[i]);
		}
	}
	return 0;
}
	
