#include<stdio.h>
void main()
{
int a,b,c,i;
scanf("%d\t%d",&a,&b);
for(i=a+1;i<b;i++)
{
if(i%2==0)
{
c=i;
printf("%d\t",c);
}
}
