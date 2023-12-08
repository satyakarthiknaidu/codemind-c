#include<stdio.h>
int div(int,int);
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int res=div(a,b);
	printf("%d",res);
}
int div(int a,int b)
{
	int div;
	div=(a/b);
	return div;	
}