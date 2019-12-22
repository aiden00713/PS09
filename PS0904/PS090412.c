#include <stdio.h>
void afunc(char a[]);
int main(void) 
{ 
    char a[80]; 
     
    scanf("%s",a); 
    afunc(a);     
    printf("[%s]\n",a); 
     
    return 0; 
} 

void afunc(char a[])
{
	int i,end,j=0;
	char b[80];
	for(i=0;a[i]!=0;i++)
	{
	}
	end=i;
	for(i=0;i<end;i++)
	{
		if(a[i]>='A' && a[i]<='Z')
			a[i]=a[i]-'A'+'a';
		else if(a[i]>='a' && a[i]<='z')
			a[i]=a[i]-'a'+'A';
	}
	a[i]=0;
	return ;
}
