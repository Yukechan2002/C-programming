#include <stdio.h>

int main()
{
    int a,n;
    n = 1;
    
    printf("Enter a number: ");
    scanf("%d",&a);
    
    while(n<=10){
        
        printf("%d x %d = %d\n",n,a,n*a);
        n+=1;
    }

    return 0;
}
