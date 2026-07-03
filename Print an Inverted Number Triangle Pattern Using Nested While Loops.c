#include<stdio.h>
int main(){
    
    int i,j;
    i=1;
    
    while(i<=5){
        j=1;
       while(j<=6-i){
           printf("%d ",i);
           j+=1;
       } 
       printf("\n");
       i+=1;
    }
    
    return 0;
}
