#include <stdio.h>
int main(void)
{
	int num[80][2];
	int fail1=0,fail2=0;
	int i,j=0,end,n,pass;
	for(i=0;i<80;i++)
	{
		scanf("%d",&n);
		if(n==0)
		{
			break;
		}
		
		scanf("%d",&num[i][0]);
		scanf("%d",&num[i][1]);
	}
	end=i;
	scanf("%d",&pass);
	for(i=0;i<end;i++)
	{
		if(num[i][0]<pass)
			fail1++;
		if(num[i][1]<pass)
			fail2++;
	}
	printf("FAIL=%d %d",fail1,fail2);
	return 0;
}
