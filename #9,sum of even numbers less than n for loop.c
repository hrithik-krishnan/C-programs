
#include <stdio.h>

int main()
{
    int num,i,sum=0;
    printf(" sum of even numbers less than n\n enter a value for n\n");
    scanf("%d",&num);
    for(i=2;i<=num;i++){
        if(i%2==0){
            sum=sum+i;
            
        }
        
    }
    printf("result=%d",sum);

    return 0;
}
