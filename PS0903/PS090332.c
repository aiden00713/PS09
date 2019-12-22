#include <stdio.h>
void afunc(int a[],int n);
int main(void) 
{ 
    int a[80],n,i; 

    scanf("%d",&n); 

    afunc(a,n); 
     
    for (i=0;a[i]!=0;i++) 
        printf("%d ",a[i]); 
     
    return 0; 
} 

void afunc(int a[],int n)
{
	int i=0;
	while(n>0)
	{
		a[i++]=n%10;
		n/=10;
	}
	a[i]=0;
	return;
}

