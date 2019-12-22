#include <stdio.h>
int main(void) 
{
	char a[16];
	int i,end,j=0;
	scanf("%s",a);
	for(i=0;a[i]!=0;i++)
	{
	}
	end=i;
	for(i=0;i<end;i++)
	{
		if(a[i]>='0' && a[i]<='9')
		{
			j++;
		}
		else
		{
			printf("=NO");
			return 0;
		}
	}
	printf("=%d",j);
	return 0;
}
