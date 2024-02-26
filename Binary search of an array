#include<stdio.h>
int main()
{
	int a[100],i,n,low,mid,high,key,found=0;
	printf("enter the size of the array = \n");
	scanf("%d",&n);
	printf("enter the elements in the array = \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the key value = \n");
	scanf("%d",&key);
	low =0;
	high = n-1;
	
	while ( low<= high){
	mid = (low + high)/2;
	if ( low== high &&  key!= a[mid]){
		
		printf("element is not found");
		break;
	}
	if(key==a[mid])
	{
		printf("element is found at =%d",mid);
		found=1;
		break;
	}
	else if(key<a[mid])
	{
		high = mid - 1;
	}
	else
	{
		low = mid + 1;
	}
}

}
