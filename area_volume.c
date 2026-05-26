#include <stdio.h>
#include <math.h>
int main(){

    double r = 0;
    double area = 0;
    double sphere_area =0; 
    double sphere_volume = 0;

//General Syntax Make Constants CAPITAL 
//const => Makes Value Given To a Variable Permanent

    const double PI = 3.1415926535897932;

    printf("Enter The Radius : ");
    scanf("%lf",&r);

    area = PI*pow(r,2);
    sphere_area= 4*PI*pow(r,2);
    sphere_volume= ((float)4/3)*PI*pow(r,3);

    printf("Area Of Circle = %.2f", area);
    printf("\nArea of Sphere = %.2f\n", sphere_area);
    printf("Volume of Spehre = %.2f\n", sphere_volume);


    return 0;


}