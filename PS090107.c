#include <stdio.h>
int main(void) 
{ 
	int n,i=0,j;
	int a[80];
	scanf("%d",&n);
	while(n>0)
	{
		a[i++]=n%2;
		n/=2;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d",a[j]);
	}
	return 0;
}
