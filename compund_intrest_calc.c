#include <stdio.h>
#include <math.h>
int main(){

    printf("Compund Intrest Calculator\n");

    double principal = 0.0;
    double rate_pa = 0.0;
    int time_years = 0;
    int timesCompounded= 0;
    double total= 0.0;

    printf("Enter Pincipal :");
    scanf("%lf", &principal);
    printf("Enter rate of intrest per.annum(in percentage):");
    scanf("%lf/100",&rate_pa);
    printf("Enter time of investmest/loan (IN YEARS) :");
    scanf("%d", &time_years);
    printf("Times Compunded Per Year :");
    scanf("%d", &timesCompounded);

    total = principal*pow(1+((rate_pa/100)/timesCompounded), timesCompounded*time_years);


    printf("Total Amount = $%.2f", total);


    return 0;





}