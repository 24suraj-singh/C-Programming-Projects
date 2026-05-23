 /*
Format Specifier =  SPECIAL TOKENS THAT START WITH '%'

FOLLOWED BY A CHARACTER THAT SPECIFIES THE DATATYPE

AND OPTIONALS MODIFIERS (Width, Precision, Flags)

modifiers control how daat is displayed or interpreted.......
*/

#include <stdio.h>



int main(){
    int age = 21;
    float price = 19.99;
    double percentage = 86.45;
    char grade = 'a';
    char dob[]= "24-08-2006";

//Normal-Expected Output Just Using The format Specifier yet... 


    printf("Age = %d.\n", age);
    printf("Cost = %f.\n", price);
    printf("Avg Marks = %lf .\n", percentage);
    printf("Your Grade is = %c .\n", grade);
    printf("DOB is = %s.\n", dob);


    printf("\n");


//We See That Computer at a binary level store data as powers of 2.


//So if a number cannot exactly be represented as power of 2 it guesses hence more the memory 'bytes' better the guess.. 



//****Modifiers are placed between '%' and datatype specifier(d,f,lf,c,s)....*****



//1) WIDTH - bascially makes the output of the speciied length/size..... 


/*USES

 %xd = Makes the output of that length by padding spaces to the left if needed...

 SIMILARLY... &-xd =  Makes the output of that length by padding spaces to the right if needed..

 %0xd = Makes the output that length by adding 0
 
Isf you have a negative integer then the '-' sign also takes a character space....
 and so when using %xd or %0xd the no of spaces/'0' becomes x-1.... 

 &+d = adds the sign of the Number (Postitive or Negative) before the number
 
*/

    int num1= 0;
    int num2= -10;
    int num3= 100;


    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);

//Conclusion Reached 

//'0' fag cannot be used with '-' (minus) sign......

// '0' flag is only apllied when x in %0xd is greater than the no of character in the variable (here integer)

//If the values of x in %xd is less than the no of character in the variable it gives the complete output...
//example : if num1 = 100 and we use %2d as format specifier.....100 will be printed not 2 chaacters... 

//using '+' speifier on '0' as a int value....gives its sign as +ve 


    
    printf("\n");

    printf("%4d\n", num1);
    printf("%4d\n", num2);
    printf("%4d\n", num3);

    printf("\n");

    printf("%-4d\n", num1);
    printf("%-4d\n", num1);
    printf("%-4d\n", num1);

    printf("\n");

    printf("%04d\n", num1);
    printf("%04d\n", num2);
    printf("%04d\n", num3);






/*
**PRECISION**= Used to fetch specific* output from a set value...

used in float , double , char[]

Looks like '&.x' along with a datatype ifdentifier(f,lf,s) 

Just like the minus sign '-' the decimal '.' also takes one character....so spaces might be given accordingly.

*/


//****Also PRECISION takes priority over WIDTH*****(OBSERVE THE OUPUT OF LINE 134)




    float price1 = 19.99;
    float price2= -1.5;
    float price3 = 35.7894;


    char name[]= "Suraj Kumar Singh";
    printf("%6.5s\n", name);

    printf("Price 1 = %+f. \n", price1);
    printf("Price 2 = %10f. \n", price2);
    printf("Price 3 = %f. \n", price3);
    printf("Price 1 = %8.4f. \n", price1);
    printf("Price 2 = %f. \n", price2);
    printf("Price 3 = %f. \n", price3);

    printf("\n");

  

    return 0;


}   

