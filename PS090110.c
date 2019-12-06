#include <stdio.h>
int main(void)
{
	int n[80];
	int i=0,j=0,k=0,m,end;
	scanf("%d",&m);
	
	for(;m>0;)
	{
		n[i++]=m%2;
		m/=2;
	}
	
	end=i;
	for(i=0;i<end;i++)
	{
		if(n[i]==1)
			k++;
	}
	printf("%d",k);
	return 0;
}
