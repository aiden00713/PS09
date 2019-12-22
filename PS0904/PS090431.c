#include <stdio.h>
void afunc(char a[],char b[]);
int main(void) 
{ 
    char a[80],b[80]; 
     
    gets(a); 
    afunc(a,b); 
    printf("[%s]",b); 
     
    return 0; 
} 

void afunc(char a[],char b[])
{
	int i,j=0,end;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]!=' ')
		{
			b[j++]=a[i];
		}
	}
	b[j]=0;
	return ;
}
