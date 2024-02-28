//selection sort on an array//
#include<stdio.h>
int main()
{
	int i,j,min,temp,n;
	printf("enter the size f array = \n");
	scanf("%d",&n);
	printf("enter the elements in array = \n");
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
printf("the unsorted array = \n");
	for(i=0;i<n;i++)
	{
		printf("%d     ",a[i]);
	}
	for(i=0;i<n-1;i++)
	{	min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
	temp =a[min];
	a[min]=a[i];
	a[i]=temp;
	}
	printf("the sorted array = \n");
	for(i=0;i<n;i++)
	{
		printf("%d    ",a[i]);
	}
	
}
