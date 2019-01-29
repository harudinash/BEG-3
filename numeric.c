#include <stdio.h>

int main()
{
 int a=0,b,i,j;
 char c[100000];
 gets(c);
 for(i=0;c[i]!='\0';i++)
 {
     if((c[i]>=48)&&(c[i]<=57))
     {
         a=1;
         printf("i=%d %d ",i,c[i]);
     }
     else      {
         printf("no");
         a=0;
         break;
     }
 }
 if(a==1)
 {
     printf("yes");
 }
    return 0;
}
