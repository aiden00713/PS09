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
	
	if(m>=end)//假設m的值等於字串最尾端 
	{
		a[i]=n; //尾端位置=n值 
		return;
	}
	
	for(i=end-1;i>0;i--)  //倒著數 
	{
		if(i==m)  //假設i到達m指定的位置時 
		{
			a[i+1]=a[i];
			a[i]=n;  //加入n值 
			return;
		}
			
		else //否則持續做位置+1的移位 
		{
			a[i+1]=a[i];
		}
	}
}
