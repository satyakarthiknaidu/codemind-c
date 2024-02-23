#include<stdio.h>
int main()
{
	int a[100],n,i,key;
	printf("enter num of elements in an array = \n");
	scanf("%d",&n);
	printf("elements in an array= \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter key value=\n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)       
		{printf("element is found %d=",i);}
	}
	
	{printf("elemrnt is not found in the array");}
}
