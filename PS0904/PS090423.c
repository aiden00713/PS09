#include <stdio.h>
void afunc(char a[],int n,char b[]);
int main(void) 
{ 
    char a[80],b[80]; 
    int n; 
     
    scanf("%s",a); 
    scanf("%d",&n); 
    afunc(a,n,b); 
    printf("[%s]",b); 
     
    return 0; 
} 

void afunc(char a[],int n,char b[])
{
	int i,end,j=0,k;
	for(i=0;a[i]!=0;i++)
	{
	}
	end=i;
	for(i=n;i<end;i++)
	{
		b[j++]=a[i];
	}
	b[j]=0;
	return;
}
