#include<stdio.h>
int main(){
    
    int i,j;
   int a=65;
    i=1;
    
    while(i<=5){
        j=1;
        while(j<= 5 - i){
            printf(" ");
            j+=1;
        }
        j=1;
        a=65;
        while(j<=i){
            
            printf("%c",a);
           a+=1;
            j+=1;
            
        }
         
        printf("\n");
        
        i+=1;
    }
}
