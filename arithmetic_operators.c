#include <stdio.h>
int main(){

/*
    Arithemetic Operators....

    Add => +
    Subtract => -
    Multiply => *
    Divide => / 
    Modulus(Gives Remainder) = %
    Increment(+1) = ++
    Decrement(-1) = --

    
*/

    int a = 17;
    int b = -6;

//In C we need a variable where info is stored for the operations......

    int s = 0;

//*****TO SEE ANY SPECIFIC OPERATION 1ST TURN OTHER OPERATION INTO COMMENTs, THEN TURN BACK YOUR REQ OPERATION TO NORMAL......******

/* 1 => Addtion

    s = a+b;
    printf(" Sum = %d", s);
*/





/* 2 => Subtraction

s= a-b;
    printf("Difference = %d", s);

*/




    
/* 3 => Multiply

    s = a*b;
    printf("Multiply = %d",s);

*/






// 4 => DIVIDING NEEDS ATTENTION****

//You Cannot Retain Decimal In 'int Storage Variable'..........hence you must make sure what type of output is needed by u and proceed accordingly.........

//If stored in float variable , output = x.000000 and if stored in int variable , output = x


    float x= 10.2;
    float y = 3;
    float z = x/y;
    printf("Division = %.2f\n", z);

// Simplified

//If 2 int used result is int....

//If 1 int and 1 float used result is float....

//If 2 float used the output is also float.....




/* 5 => Modulus (Remainder)

Just Do Normal Division and Give the sign of numerator to the remainder.....


//This is possible because C decides to truncate the quotient towards 0.

*/




    
/*Modulus-Code

    s= a%b;
    printf("The reaminder when a is divided by b is = %d", s);


*/



//6=>INCREMENT AND DECREMENT

//Mainly used in loops........

    a++;
    printf("%d\n",a);

    a++;
    printf("%d\n",a);

    s--;
    printf("%d\n",s);

    s--;
    printf("%d\n",s);




// 7 => Augmented Assignment Operators (repurpose old variable or reasign them....)

    b=b+2;
    printf("The Req = %d\n",b);

    return 0;

/*
Similarly we have...

b-=6;

b*=7;

b/=2;

*/

}