//��ͬ��С����s(d,n)
#include<stdio.h>
int main()
{
	int d,j,n;
	double t,s;
	printf("  ����������d,n:");
	scanf("%d,%d",&d,&n);
	s=(n-0.111111111)*d/9;
	printf("  s(%d,%d)=%.8f\n",d,n,s);
} 