#include <stdio.h>
int afunc(char a[]);
int main(void)
{
    char a[80];
    
    scanf("%s",a);
    printf("[%d]",afunc(a));
    
    return 0;
}

int afunc(char a[])
{
	int i,end,j=0,k=0;
	for(i=0;a[i]!=0;i++)
	{
	}
	end=i;
	for(i=0;i<end;i++)
	{
		for(j=end-1;j>0;j--)
		{
			if(a[i]==a[j])
				k++;
		}
		
	}
	if(k>end)
		return 1;
	else
		return 0;
}
