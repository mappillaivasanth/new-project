#include "stdio.h"

int main(void) {
 int n,i,count=0;
 scanf("%d",&n);
 for(i=1;i<=10;i++)
 {
   if(n%i==0)
   {
     count++;
   }
 }
 if(count<2)
 {
   printf("yes");
 }
 else
 {
   printf("no");
 }
  return 0;
}
