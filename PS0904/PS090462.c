#include <stdio.h>
int main(void) 
{ 
	char a[16];
	char b[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int i,j=0,k=0,end;
	scanf("%s",a);
	for(i=0;a[i]!=0;i++)
	{
	}
	end=i;
	for(i=0;i<end;i++)
	{
		for(j=0;j<16;j++)
		{
			if(a[i]==b[j])
			{
				k++;
			}
		}
	}
	
	if(k==end)
	{
		printf("=%d",k);
	}
	else
	{
		printf("=NO",k);
	}
	return 0;
}
	
	
