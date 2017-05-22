/*定义正整数m的奇因数f(m):
  (1)若m为奇数，f(m)=m.
  (2)若m为偶数，f(m)为m去除其所有偶因数后的奇因数。
  例如f(6)=3,f(7)=7,f(8)=1,试求奇因数代数和:s(n)=∑(n)~(m=1)(-1 )^(m-1)f(m)*/
//求奇因数代数和
#include<stdio.h>
int main()
{
	int d,m,n;
	long s;
	printf("请输入整数n:");
	scanf("%d",&n);
	s=0;                             //和s清零 
	for(m=1;m<=n;m++)
	{
		if(m%2>0) s=s+m;            //奇数m累加到s 
		else{
			d=m;
			while(d%2==0) d=d/2;   //去除偶数m的偶因数 
			s=s-d;
		}
	}
	printf("s(%d)=%ld\n",n,s);    //输出和s 
}
