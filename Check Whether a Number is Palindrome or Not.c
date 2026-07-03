#include<stdio.h>
int main(){
    
    int number, reverse, mod,temp;
    
    reverse = mod = 0;
    
    printf("Enter a number: ");
    
    scanf("%d", &number);
    
    temp = number;
    
    while(number > 0){
        
        mod = number % 10;
        
        reverse = reverse * 10 + mod;
        
        number = number / 10;
    }
    
    if(temp == reverse){
      printf("palindrome number") ;
    }
    else{
        printf("Not a palindrome number");
    }
    
   
    
    return 0;
}
