#include <stdio.h>
int afunc(int a[]);
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
	int i,j,sum;
	for(i=0;a[i]!=0;i++)
	{
		;
	}
	for(j=0;j<i;j++)
	{
		sum+=a[j];
	}
	a[j]=0;
	return sum;
}
