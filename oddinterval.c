#include<stdio.h>
void main()
{
 int a,b,i;
         scanf("%d\t%d",&a,&b);
    if(a<=100000)
    {
         for(i=a+1;i<b;i++)
         {
         	if(i%2!=0)
         	printf("%d\t",i);
         }
    }
 }
