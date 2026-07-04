#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int i = 1;
    
    for(i =1;i<=5;i++){
        goto BIT;
        switch(1){
            case 5: printf("A");break;
            case 3: printf("B");break;
            BIT:
            case 2: printf("C");continue;
            case 4: printf("D");break;
            case 1: printf("F");continue;
            
        }
    }
  return 0;
   } 
