#include <stdio.h>
int main(void) 
{   
	int a[20];
	int i=0,j=0,end;
	for(i=0;i<20;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)
			break;
	} 
	
	end=i;
	for(j=end-1;j>0;j--)
	{
		printf("%d ",a[j]);
	}
	printf("%d",a[0]);
	return 0;
}
