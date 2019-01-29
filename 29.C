#include <stdio.h>

int main()
{
   int a,b=1,c=0;
   printf("Input :");
   scanf("%d",&a);
   printf("Output :\n");
   while(b)
   {
       if(a>=60)
       {
           a=a-60;
           c++;
       }
       else
       {
         b=0;
         
       }
   }
   printf("%d %d",c,a);
   
    return 0;
}
