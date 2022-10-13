/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    int choice,num1,num2,result;
    printf("enter 2 numbers");
    scanf("%d%d",&num1,&num2);
    
    printf(" 1 for addition \n 2 for multipilication \n 3 for divison \n 4 for substraction\n ENTER YOUR CHOICE" );
    scanf("%d",&choice);
    
    if(choice==1){
        result=num1+num2;
        printf("result is %d",result); 
         
    }else if(choice==2){
        result=num2*num1;
        printf("result is %d",result); 
    }else if(choice==3){
        result=num1/num2;
        printf("result is %d",result); 
        
    }else if(choice==4){
        result=num1-num2;
        printf("result is %d",result); 
       
    } else{
        printf("you are a retard");
    }   
    
    
    return 0;
}
