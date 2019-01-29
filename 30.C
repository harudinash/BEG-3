#include <stdio.h>

int main()
{
   int a,b=1,c=0,d,e,f,g,h;
   printf("Input :");
   scanf("%d%d%d%d",&a,&d,&e,&f);
   printf("Output :\n");
   if(a>e)
   {
       g=a-e;
       if(d>=f)
       {
        h=d-f;   
       }
       else{
           g=g-1;
           d=d+60;
           h=d-f;
       }
   }
   else
   {
       g=e-a;
       if(f>=d)
       {
           h=f-d;
       }
       else
        {
          g=g-1;
          f=f+60;
          h=f-d;
          }
   }
   printf("%d %d",g,h);
    return 0;
}
