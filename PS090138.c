#include <stdio.h>
int main(void)
{
	int n,m,sum,sum2,i;
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&n);
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	sum2=(sum+m+6)%7;
	printf("%d",sum2);
	return 0;
}
