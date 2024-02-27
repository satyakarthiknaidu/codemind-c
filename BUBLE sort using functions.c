//bubble sort using functions//
#include<stdio.h>
void bubble_sort(int a[],int size)
{
	int i,j;
	for(i=0;i<size-1;i++)
		{
			for(j=0;j<size-1;j++)
			{
				if(a[j]>a[j+1])
				{
					int temp = a[j];
					a[j] = a[j+1];
					a[j+1]=temp;
				}
			}
		}
}
int main()
{
 int i,j,n;
 printf("enter the size of the array = \n");
 scanf("%d",&n);
 int a[n];
 printf("enter the elemengts in an array = \n");
 for(i=0;i<n;i++)
 {
 	scanf("%d",&a[i]);
}
 
printf("the acctual array");

	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	bubble_sort(a,n);
	printf("the bubble sorted array = ");
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	
	}
}
