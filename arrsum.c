#include <stdio.h>

int main() {
   int arr[5];
   int p=0;
   for(int i=0;i<5;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(int j=0;j<5;j++)
   {
       p=p+arr[j];
   }
   printf("%d",p);

    return 0;
}
