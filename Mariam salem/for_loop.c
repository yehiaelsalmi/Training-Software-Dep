#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
      int n=b-a+1;
      int x[n];
   for(int i=0;i<n;i++){
       x[i]=a;
       a=a+1;
          if(x[i]>=1 && x[i]<=9){
             if (x[i]==1){
                 printf("one\n");
             }
             else if (x[i]==2){
                 printf("two\n");
             }
             else if (x[i]==3){
                 printf("three\n");
             }
             else if (x[i]==4){
                 printf("four\n");
             }
             else if (x[i]==5){
                 printf("five\n");
             }
             else if (x[i]==6){
                 printf("six\n");
             }
             else if (x[i]==7){
                 printf("seven\n");
             }
             else if (x[i]==8){
                 printf("eight\n");
             }
             else{
                 printf("nine\n");
             }


          }
          else{
              if(x[i]%2==0){
                  printf("even\n");
              }
              else{
                  printf("odd\n");
              }

          }

   }
    return 0;
}
