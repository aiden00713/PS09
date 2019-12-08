#include <stdio.h>
void afunc(int a[]); 
int main(void) 
{ 
    int a[80],i; 

    afunc(a); 

    for (i=0;a[i]!=0;i++) 
        printf("%d ",a[i]); 
     
    return 0; 
} 

void afunc(int a[])
{
	int i;
	for(i=0;i<80;i++)
	{
		scanf("%d",&a[i]);
			if(a[i]==0)
				break;
	}
	return;
}
