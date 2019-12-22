#include <stdio.h>
int main(void) 
{ 
    int a[80],i=0; 

    scanf("%d",&a[i]); 
    while (a[i]!=0) 
        scanf("%d",&a[++i]); 

    printf("[%d]",afunc(a)); 
     
    return 0; 
} 

int afunc(int a[])
{
	int i;
	int end;
	for(i=0;a[i]!=0;i++)
	{
		;
	}
	end=i;
	
	int max=a[0];
	for(i=1;i<=end;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
}
