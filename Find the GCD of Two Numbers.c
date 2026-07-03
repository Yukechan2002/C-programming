#include <stdio.h>

int main()
{
int a,b,c,d;



printf("Enter first number: ");
scanf("%d",&a);

printf("\nEnter second number: ");

scanf("%d",&b);
c=a;
d=b;
while(a != b){
  if(a>b){
      a-=b;
  }
  else{
      b-=a;
  }
}
printf("\nThe GCD of %d and %d is %d",c,d,a);
    return 0;
}
