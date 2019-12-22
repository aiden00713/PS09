#include <stdio.h>
int main(void) 
{ 
    int a[80],i=0; 

    scanf("%d",&a[i]); 
    while (a[i]!=0) 
        scanf("%d",&a[++i]); 

    printf("[%d] ", afunc(a)); 
     
    for (i=0;a[i]!=0;i++) 
        printf("%d ",a[i]); 
     
    return 0; 
} 

int afunc(int a[])
{
	int i;
	int top = a[0];
	for (i=0;a[i]!=0;i++)
	{
		a[i-1]=a[i];
	}
	a[i-1]=0;
	return top;
}
