#include <stdio.h>
#include <string.h>
int main(){

    char item[30]= "";
    int quantity = 0;
    float price = 0.0f;
    char currency ='$';
    float total = 0.0f;

    
    printf("Welcome To Our Shop\n");
    
    
    printf("What item would you like to buy? : ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item)-1]= '\0';

    printf("How many would you like to buy? :");
    scanf("%d", &quantity);

    printf("Price of single item : ");
    scanf("%f", &price);
    printf("\n");

    total = quantity*price;


//When Printing Multiple Variables at Once..
//The order of format specifier must match the order of Variables for correct output.........

    printf("You have bought %d %s/s. \n", quantity, item);

    printf("Yout Total is :%c%.2f\n",currency, total);

    printf("THANK YOU FOR SHOPPING!!\n....Have a nice day....");


    return 0;



}
