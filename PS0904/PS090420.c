#include <stdio.h>
void afunc(char a[],char b[],char c[]);
int main(void) 
{          
    char a[80],b[80],c[80]; 

    scanf("%s",a); 
    scanf("%s",b); 
    afunc(a,b,c); 
    printf("[%s]\n",c); 
     
    return 0; 
} 

void afunc(char a[],char b[],char c[])
{
	int i,end,j=0;
	for(i=0;a[i]!=0;i++)
	{
	}
	end=i;
	for(i=0;i<end;i++)
	{
		if(a[i]=='0' && b[i]=='0')
		{
			c[i]='0';
		}
		else
		{
			c[i]='1';
		}
	}
	c[i]=0;
	return ;
}
