#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,s=10,a[s],sum=0;
   printf("Input the number of elements to store in the array:");
   scanf("%d",&s);
   printf("Input %d numbers of elements in array:",s);
   for(i=0;i<s;i++)
   {
    printf("\nelement %d:",i);
   scanf("%d",&a[i]);
   }

   for(i=0;i<s;i++)
   {
     sum=sum+a[i];

   }
    printf("sum of all elements stored in the array:%d",sum);
    return 0;
}
