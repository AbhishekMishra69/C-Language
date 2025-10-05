#include <stdio.h>
#include <math.h>

int main()
{
   int x,n,result;
   printf("enter Value in x and n");
   scanf("%d%d",&x,&n);
   result=pow(x,n);
   printf(" %d's power %d Then result is  %d",x,n,result);
    return 0;
}
