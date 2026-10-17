#include<stdio.h>
#include<math.h>
 int main()
 {
   int n,i,sum;
   printf("enter n value");
   scanf("%d",&n);
   sum=0;
   for(i=0;i<=n;i++){
   sum=i+sum;
 }
   printf("sum=%d\n",sum);
   return 0;
 }  
