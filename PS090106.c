#include <stdio.h>
int main(void) 
{ 
	int a[10];
	int b[10];
	int i,j,k=0,end;
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)
			break;
	}
	for(j=0;j<10;j++)
	{
		scanf("%d",&b[j]);
		if(b[j]==0)
			break;
	}
	end=i;
	for(i=0;i<end;i++)
	{
		if(a[i]!=b[i])
			k++;
	}
	printf("%d",k);
	
	return 0;
}
	
