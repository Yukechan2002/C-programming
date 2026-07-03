#include <stdio.h>

int main()
{
int a,n,factorial;

a=1;
factorial= 1;

printf("Enter a number: ");
scanf("%d",&n);

while(a <= n){
  factorial = factorial * a;
     printf("%d ",a);
    
    a+=1;
}
printf("\nFactorial:%d ",factorial);
    return 0;
}
