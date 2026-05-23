#include <stdio.h>


#include <math.h>

//To easy access these useful maths functions we need to add this specific header file....


int main(){

//SAY int x = 9;

    int x= 9;

    printf("Value OF x = %d\n", x);

//sqrt(variable) Function : Finds square root of the given no.....

    x = sqrt(x);

    printf("Sqrt of x = %d\n" , x);

//pow(variable,power) FUNCTION : Finds Power...

    int y = 4;

    y = pow(y , 3);

    printf("Y raised to Power 4 is = %d.\n", y);

//round() Function : rounds off the decimal part....

    float z = 43.25;

    z= round(z);

    printf("The Rounded Value of z is = %f\n",z);

//ceil() Function :ALWAYS Rounds Off away from 0........

    float a = 14.09;

    a = ceil(a);

    printf("Ceil value for a is = %f\n", a);

//floor() Function :ALWAYS Rounds off towards 0.........

    float b = 32.99;

    b = floor (b);

    printf("The Floor value for b is = %f\n", b);

//fabs() Function : The absolute value function.....Gives the distance from 0....

    float c = 15.45;

    c =fabs(c);

    printf("The absolute value of c is = %f\n", c);

//log() Function : Gives natural log of the variable....

    float d = 14.145;

    d = log (d);

    printf("The value of logarithm of d is = %f\n",d);

//sin(x) Function : Here x is in RADIANS**

//Similarly we have cos(x) and tan(x)


    float e = 3.14/4;

    printf("\nThe value of e = %f\n",e);

    printf("\nsin(e)= %f\n", sin(e));
    printf("cos(e)= %f\n", cos(e));
    printf("tan(e)= %f\n", tan(e));


    return 0;

    
}
