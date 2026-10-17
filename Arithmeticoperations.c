#include<stdio.h>
#include<math.h>
  int main()
     {
       int a,b,sum,sub,mult;
       float div;
       printf("enter a and b value");
       scanf("%d %d",&a,&b);
       sum=a+b;
       sub=a-b;
       mult=a*b;
       div=(float)a/b;
       printf("sum=%d\n",sum);
       printf("sub=%d\n",sub);
       printf("mult=%d\n",mult);
       printf("div=%f\n",div);
       return 0;
     }
