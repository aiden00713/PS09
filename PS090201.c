#include <stdio.h>
int main(void)
{
	double avg1=0,avg2=0;   //����
	int sum1,sum2;   //�[�` 
	int a[20][2];  //��J[�ǥͤH��] [��� �^��] 
	int i,j,s,end;
	
	for(i=0;i<20;i++)
	{
		printf("��J�Ǹ�");
		scanf("%d",&s);  //��J�Ǹ� �p�G��J0�Nbreak 
		if(s==0)
		{
			break;
		}
		
		scanf("%d",&a[i][0]);
		scanf("%d",&a[i][1]);
	} 
	end=i;
	
	for(i=0;i<end;i++) //end���̫��J�ǥͪ��H�� 
	{
		sum1+=a[i][0];
		sum2+=a[i][1];
	} 
	avg1=sum1/end;
	avg2=sum2/end;
	
	printf("AVG=%.2lf %.2lf",avg1,avg2);
	
	return 0;
}
