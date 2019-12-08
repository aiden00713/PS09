#include <stdio.h>
int main(void)
{
    int a[81],i=0;

	scanf("%d",&a[i]);
    while (a[i]!=0)
        scanf("%d",&a[++i]);

	printf("[%d]\n",afunc(a));
    
    return 0;
}

int afunc(int a[])
{
	int i=0,end;
	for(i=0;a[i]!=0;i++)
	{
		;
	}
	return i;
}
