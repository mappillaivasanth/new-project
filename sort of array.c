#include <stdio.h>

int main(void) {
	// your code goes here
	int a[50],n,i,j;
	int temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d\t",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	   	
		if(a[i]>a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
		
	}
	for(i=0;i<n;i++)
	{
	printf("%d",a[i]);
	}
	return 0;
}
