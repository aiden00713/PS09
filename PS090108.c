#include <stdio.h>
int main(void)
{
	int n,i=0,j,num[80];
	scanf("%d",&n);
	
	for(;n>0;) //��16 
	{
		num[i++]=n%16;
		n/=16;
	}
	char h[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	
	for(j=i-1;j>0;j--) //�˵ۦL�X �p�G�]j>=0 �N�|�h�L�X- 
	{
		printf("%c-",h[num[j]]);  //��j���Ʀr�ӫ��wh�n�L�X�h�� 
	}
	printf("%c",h[num[0]]);  //�̫�A�L�Xnum[0] 
	return 0;	
} 
