#include<stdio.h>
int main(){
    
    int i,j;
    i=1;
    int a = 65;
    
    while(i<=5){
        j=1;
       while(j<=5){
           printf("%c ",a);
           j+=1;
           a+=1;
       } 
       printf("\n");
       i+=1;
    }
    
    return 0;
}
