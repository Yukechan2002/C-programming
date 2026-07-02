#include <stdio.h>

int main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d",&a);
  
if(a>= -9 && a<=9){
  printf("Single Digit");
}
  else{
  printf("Multiple Digit");
  }
  
    return 0;
}
