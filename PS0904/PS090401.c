#include <stdio.h>
int afunc(char a[]);
int main(void) 
{ 
    char a[80]; 
     
    scanf("%s",a); 
    printf("[%d]",afunc(a)); 
         
    return 0; 
} 

int afunc(char a[])
{
	int i,end;
	for(i=0;a[i]!=0;i++)
	{
	}
	end=i;
	return end;
}
