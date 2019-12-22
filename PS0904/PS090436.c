#include <stdio.h>
int afunc(char a[]);
int main(void) 
{ 
    char a[80]; 
     
    gets(a); 
    printf("[%d]",afunc(a)); 
     
    return 0; 
}

int afunc(char a[])
{
	char b[80];
	int i,end,j=0;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]>='0' && a[i]<='9')
			b[j++]=a[i];
	}
	if(j==0)
		return -1;
	
	for(i=0;i<j;i++)
	{
		if(b[i+1]<b[i])
		{
			b[i+1]=b[i];
		}
			
		else
		{
			b[i]=b[i+1];
		}
	}
	return b[i]-'0';
 } 
