//拓广 同码小数和s(d,n)
#include<stdio.h>
int main()
{
	int a,b,d,j,n;
	double t,s;
	printf("请输入整数d,n:");
	scanf("%d,%d",&d,&n);
	a=d;
	b=1;
	while(a>0)
	{
		b=b*10;
		a=a/10;
	}
	t=s=0;
	for(j=1;j<=n;j++)
	{
		t=t/b+(double)d/b;
		s+=t;
	}
	printf("s(%d,%d=%.8f\n",d,n,s);
} 