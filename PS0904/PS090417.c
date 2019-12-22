#include <stdio.h>
void afunc(char a[],char b[]);
int main(void) 
{          
    char a[80],b[80]; 

    scanf("%s",a); 
    afunc(a,b); 
    printf("[%s]\n",b); 
     
    return 0; 
} 

void afunc(char a[],char b[])
{
	int i,end,j=0;
	for(i=0;a[i]!=0;i++)
	{
	}
	end=i;
	for(i=0;i<end;i++)
	{
		if(a[i]=='0')
		{
			b[j++]='1';
		}
		else
		{
			b[j++]='0';
		}
	}
	b[j]=0;
	return;
}
