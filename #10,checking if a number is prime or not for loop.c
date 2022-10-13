
#include <stdio.h>

int main()
{
    int num,i,flag=0;
    printf(" checking if a number is prime or not\n enter a value for n\n");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++){
        if(num%i==0){
            flag=1;
            break;
            
        }
    }
        if(flag==0){
        printf("entered number is a prime number");
    }else{
        printf("entered number is not a prime");
    }
    
    
    return 0;
}
