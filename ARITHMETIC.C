#include <stdio.h>
// #include <math.h>  
 int main() 
 { int a, d, n, i, tn; int sum = 0;   printf("Input: \n"); 
 scanf("%d", &n);
 // printf("Enter the total numbers in the A.P. series: "); 
  scanf("%d", &a); 
 // printf("Enter the common difference of A.P. series: "); 
  scanf("%d", &d);
   sum = (n * (2 * a + (n - 1)* d ))/ 2; 
   tn = a + (n - 1) * d; 
   printf("Output : ");
    for (i = a; i <= tn; i = i + d )
     { if (i != tn) 
         continue;
      else 
      printf("\n%d ",sum); 
      } 
      return 0;
       }
