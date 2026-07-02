#include <stdio.h>

int main()
{
  char a;
  printf("Enter a letter: ");
  scanf("%c",&a);
  
  if(a == 'A' || a == 'a' || a == 'E' || a == 'e' || a == 'I' || a == 'i' || a == 'O' || a == 'o' || a == 'U' || a == 'u' )
  
  printf("vowels");
  else
  printf("consonant");
  
    return 0;
}
