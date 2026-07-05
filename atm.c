#include <stdio.h>

int main(){

    int pin=2222;
    int enteredpin;
    int amount=5000;
    int enteredamount;

printf("enter your pin");
scanf("%d",&enteredpin);

if(pin==enteredpin){
    printf("your enteredpin is right&%d\n",pin);
}
    if(amount==enteredamount){
        printf("enter your widrol amount%d\n",amount);
        

    }else{
        printf("your pin is invalide try again.\n",pin);
        printf("please check your account balance.\n",amount);

    }
return 0;
}
