// Lesson 2 - Datatypes & Variables

/* 
Variables = re-usable container for value.

Variable are the same as you know in maths....

they assume the value and datatype assigned to them and

behave as if they are the value themselves...

*/
#include <stdio.h>

int main(){

    int age = 20;
    int year = 2026;

/*Now in order to use our variable we need format specifier i.e "%d"

Then after finishing the print stamement put a comma ',' and type the name of the variable you want to use....

*/ 


//This was working with integers.

    printf("You are %d years old.\n",age);

    printf("This year is %d.\n",year);

/*
For next datatype we have 'float' its format specifier is %f

***C has a habit of displaying float value upto 6 places by default.

******IT CAN ONLY DISPLAY UPTO 6 DECIMAL PLACES.AFTER THAT IT GUESSES EVEN IF THE VALUE AFTER 6TH PLACE EXITS......

After the identifier '%f' we use ".x" IN BETWEEN % AND f.

EXAMPLE BELOW

****So it should look like this "%.2f"

*****IT ROUND OFF AFTER THE SPECIFIED x PLACES. 

EXAMPLE BELOW

*/

    float Cgpa=6.9;
    float price = 35.749;
    float etax= 17.7899749955;

    printf("\n");

    printf("The average CGPA this semester is %f.\n",Cgpa);

    printf("The price of 1kg wheat is Rs:%.1f.\n", price);

 //expexted resultis 17.7 but it round up and becomes 17.8

    printf("The GST on Electronics is %.1f.\n",etax);

    printf("\n");






/*
NEXT DATATYPE IS 'double'

it is same as 'float' but ******it stores and displays upto 15 chracter after decimal.

its formart specifier is '%lf' standing for 'LONG FLOAT'

You can use the '%.x' prescison here also.

EXAMPLE BELOW

*/
    double pi = 3.1415926535897932;
    double e = 2.7182818284590452;

    printf("The value of pi upto 17 digits after decimal is %.17lf\n",pi);

//We can clearly see the value of pi an e are assumed after 15th place in both cases...

    printf("Te value of e upto 16 digits after decimal is %.16lf.\n",e);

 //Lets see if this 'Precision' also rounds off

    printf("The value of e upto two decimal places is %.2lf.\n", e);

//Yup Clearly The expected result was 2.71  but it rounded it off to 2.72


    printf("\n");







/*
Next Datatype is "char"

It can only store a single character it can be anything - symbol , number , letter, etc.

char must be stored in single qoutes i.e    ''

its format specifier is '%c'    standing for CHARACTER

*/

    char grade = 'A';
    char symbol = '+';

    printf("Your maths grade is %c .\n", grade);

    printf("The symbol used for addition is %c.\n", symbol);

    printf("\n");




/*

Similarly we have datatype *array "char[]"

It can store a STRING........yes that string you(ME) are familiar with.

eg: name[x] where x is the exact size of the string in bytes(memory)   MAINLY x WILL NEED TO BE SPECIFIED WHEN TAKING USER INPUT....scanf()

****REMEMBER ARRAY STORE '\0' => NULL TERMINATOR IN 1 byte BEFOREHAND TO KNOW WHERE THE STRNG ENDS.....
SO ITS IMPORTANT TO KEEP THAT 1byte SPAVE IN MING WHEN DECIDING APPROPRIATE x FOR USER INPUT

IT MUST BE STORED INSIDE double qoutes ""

its format specifier is '%s'  standing for STRING

*/

    char name[]= "Suraj Singh";
    char school[]= "ARMY PUBLIC SCHOOl";
    char dob[]= "24-8-2006";


//DO NOT FORGET TO END WITH SEMI-COLON BRO :(   ;

    
    printf("My name is %s.\n", name);
    printf("I'm from %s.\n", school);
    printf("My DOB is %s,\n", dob);

    printf("\n");





/*
LASTLY WE HAVE BOOLEAN

YOU MUST INCLUDE BOOLEAN HEADER FILE BY #include <stdbool.h>

It is used to check logic internally True or False which is synonymus with 1 or 0 respectiely;

Example Below

*/

#include <stdbool.h>

    bool isOnline = true;

    if(isOnline){

        printf("%d\n",isOnline);
        
        printf("You are Online\n");

    }

    else{
        printf("You are Offline");
    }

    return 0;

}