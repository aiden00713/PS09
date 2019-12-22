#include <stdio.h>
int main(void)
{
	int m[12]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int a,b,i=0,sum=0,d=0;
	scanf("%d %d",&a,&b);
	for(i=0;i<a;i++)
	{
		sum+=m[i];
	}
	d=sum+b;
	printf("%d",d);
	return 0;
}
