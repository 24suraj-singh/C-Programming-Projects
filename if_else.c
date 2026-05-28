#include <stdio.h>
#include <stdbool.h>
#include <string.h>


//=======================================================================
//**********************TRY TO REMEMBER**********************************
//=======================================================================

//C Compiler Checks Condition inside *if statements From Left To Right....

/*
So when giving multiple conditions make sure....for

&& : 'AND' Operator.....KEEP THE STATEMENT THATS LIKELY TO BE FLASE* on the LEFT
|| : 'OR' Operator.....KEEP THE STATEMENT THATS LIKELY TO BE 'TRUE' on the LEFT

This way the compiler doesnt give shit about rest of the conditions inside
and moves to the next line..

*/

//EXAMPLE 1:

int main(){

    int age =0;
    printf("Enter Your AGE (in years): ");
    scanf("%d",&age);
    
//NOTICE********
/*
Order of the Condition** you put inside your 'if' & 'elif' statements matters a lot..
for example:

    int age = 65;
    if(age >=18){
        printf("You are an adult."); 
    }
    else if(age >=60){
        printf("You are a Senior.")

    
    }        



OUTPUT: You are an adult.
WHYYY?? : Because If Logic Block Ends* Itself upon fullfillment of any 1 of the 'if' or 'elif' statement.


    So It would have been better to put (age >= 55) in the 1st 'if' statement.....

    So that for age = 60.....WE Get OUTPUT : You are a Senior.

*/





    if(age >=55 ){
        printf("You are a Senior Citizen\n");
    }

    else if(age>=18){
        printf("You are an Adult.");
    }

    else if(age==0){
        printf("You are a Newborn Baby.");
    }

    else if(age<0){
        printf("Not Born Yet");
    }
    else{
        printf("You are a Child.");
    }

    return 0;


}