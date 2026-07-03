#include<stdio.h>
int main(){
    
    int number, reverse, mod;
    
    reverse = mod = 0;
    
    printf("Reverse of a number \n Enter a number: ");
    
    scanf("%d", &number);
    
    while(number > 0){
        
        mod = number % 10;
        
        reverse = reverse * 10 + mod;
        
        number = number / 10;
    }
    
    printf("Reverse: %d", reverse);
    
    return 0;
}
