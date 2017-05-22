//求同码小数和s(d,n)
#include<stdio.h>
int main()
{
	int d,j,n;
	double t,s;
	printf("  请输入整数d,n:");
	scanf("%d,%d",&d,&n);
	t=s=0;
	for(j=1;j<=n;j++)
	{
		t=t/10+(double)d/10;
		s+=t;
	} 
	printf("  s(%d,%d)=%.8f\n",d,n,s);
} 