#include <stdio.h>
void afunc(int a[],int m,int n);
int main(void) 
{ 
    int a[80],i=0,n,m; 

    scanf("%d",&a[i]); 
    while (a[i]!=0) 
        scanf("%d",&a[++i]); 
    scanf("%d%d",&m,&n);  
     
    afunc(a,m,n); 
     
    for (i=0;a[i]!=0;i++) 
        printf("%d ",a[i]); 
     
    return 0; 
} 

void afunc(int a[],int m,int n)
{
	int i,end,j=0;
	for(i=0;a[i]!=0;i++)
	{
	}
	end=i;
	
	if(m>=end)//���]m���ȵ���r��̧��� 
	{
		a[i]=n; //���ݦ�m=n�� 
		return;
	}
	
	for(i=end-1;i>0;i--)  //�˵ۼ� 
	{
		if(i==m)  //���]i��Fm���w����m�� 
		{
			a[i+1]=a[i];
			a[i]=n;  //�[�Jn�� 
			return;
		}
			
		else //�_�h���򰵦�m+1������ 
		{
			a[i+1]=a[i];
		}
	}
}
