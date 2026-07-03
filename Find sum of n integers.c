#include <stdio.h>

int main()
{
int a, n, sum;
a=1;
sum= 0;
printf("Enter a number: ");
scanf("%d",&n);
while(a <= n){
  sum = sum + a;
     printf("%d ",a);
    
    a+=1;
}
printf("\nSum:%d ",sum);
    return 0;
}
