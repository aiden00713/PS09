#include <stdio.h>
int main(void)
{
	double avg1=0,avg2=0;   //平均
	int sum1,sum2;   //加總 
	int a[20][2];  //輸入[學生人數] [國文 英文] 
	int i,j,s,end;
	
	for(i=0;i<20;i++)
	{
		printf("輸入學號");
		scanf("%d",&s);  //輸入學號 如果輸入0就break 
		if(s==0)
		{
			break;
		}
		
		scanf("%d",&a[i][0]);
		scanf("%d",&a[i][1]);
	} 
	end=i;
	
	for(i=0;i<end;i++) //end為最後輸入學生的人數 
	{
		sum1+=a[i][0];
		sum2+=a[i][1];
	} 
	avg1=sum1/end;
	avg2=sum2/end;
	
	printf("AVG=%.2lf %.2lf",avg1,avg2);
	
	return 0;
}
