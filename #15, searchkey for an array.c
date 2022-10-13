#include <stdio.h>

int main()
{
    int limit,i,values[100],searchkey,flag=0;
    printf("enter limit");
    scanf("%d",&limit);
    printf("enter array values");
    for(i=0;i<limit;i++){
        scanf("%d",&values[i]);
    }
    printf("ENTER SEARCH KEY");
    scanf("%d",&searchkey);
    for(i=0;i<limit;i++){
        if(searchkey==values[i]){
            flag=1;
            break;
        }
    
    }
    if(flag==1){
        printf("serach key found at : %d",i+1);
    }else{
        printf("search key not found");
    }
    return 0;
}
