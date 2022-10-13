

#include <stdio.h>

int main()
{
    int choice;
    printf(" 1 for biriyani \n 2 for porrotta\n 3 for manthi\n ENTER YOUR CHOICE");
    scanf("%d",&choice);
    switch(choice){
    case 1:
        printf("you have selected biriyani");
    break;
    case 2:
        printf("you have selected porrotta");
        break;
    case 3:
        printf("you have selected manthi");
        break;
    default:
        printf("item not found");
    }
        

    return 0;
}
