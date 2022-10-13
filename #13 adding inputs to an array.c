
#include <stdio.h>

int main()
{
    int limit,a[100],i;
    printf("enter array limit");
    scanf("%d",&limit);
    printf("enter values");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    printf("entered values are: ");
    for(i=0;i<limit;i++){
    printf("%d\t",a[i]);
    }
    return 0;
}
