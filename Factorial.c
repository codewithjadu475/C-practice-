#include<stdio.h>
#include<math.h>
  int main()
  {
    int n,i;
   long  factorial=1;
    printf("enter n value");
    scanf("%d",&n);
     if (n<0){
        printf("factirial is not defined");
    } else{
          for(i=1;i<=n;i++){
       factorial=i*factorial;
     }
       printf("factorial of %d=%ld",n,factorial);
     }
       return 0;
     }
   
       
