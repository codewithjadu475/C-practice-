#include<stdio.h>
#include<math.h>
  int main()
    {  
       int m1,m2,m3,m4,total;
       float percentage;
       printf("enter 4 value");
       scanf("%d %d %d %d",&m1,&m2,&m3,&m4);
       total=m1+m2+m3+m4;
       percentage=total*100.0/400;
       printf("percentage=%.2f\n",percentage);
       return 0;
     }
