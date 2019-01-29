#include <stdio.h>

int main()
{
   int a,b[100000],c,i,j;
   printf("Input :");
   scanf("%d",&a);
   for(i=0;i<a;i++)
   scanf("%d",&b[i]);
   printf("Output :\n");
   for(i=0;i<a;i++)
   printf("%d %d\n",b[i],i);
    return 0;
}
