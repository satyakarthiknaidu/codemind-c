//BUBBLE SORTING OF ELEMENTS IN AN ARRAY//
#include<stdio.h>
int main()
{
 int a[1000],i,j,n,temp;
 printf("enter the size of the array = \n");
 scanf("%d",&n);
 printf("enter the elemengts in an array = \n");
 for(i=0;i<n;i++)
 {
 	scanf("%d",&a[i]);
}
 
printf("the acctual array = \n");

	for(i=0;i<n;i++){
		printf("%d \t",a[i]);
	}
	

for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		    }
		}
	}
	printf("the bubble sorted array = ");
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	
	}
}
