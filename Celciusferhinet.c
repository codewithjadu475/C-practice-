#include<stdio.h>
#include<math.h>
 int main()
  {
     float c, temprature;
     
     printf("enter the value of c");
     scanf("%f",&c);
     temprature= (c*9.0/5.0+32);
     printf("temprature=%.2f\n",temprature);
     return 0;
   }
