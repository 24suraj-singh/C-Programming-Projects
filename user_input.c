#include <stdio.h>
#include <string.h>
int main(){

//Assigning variables but not specifying its values leads to undefined beaviour......

//So its a good habit to assign them basic starting values like....0 for INT and 0.0f for FLOAT 

//Similarly '\0' = Null Terminator for CHARACTER , for array[x] we use EMPTY STRINGS "" ........
    
   int age = 0;
   float price = 0.0f;
   char grade = '\0';
   char name[30] = "";

//Remember ENTER physicaly leaves a character '\n' in input buffer.....

//So its necessaary to add a space when taking input for %c 

//eg: sacnf(" %c", &grade);  NOTICE HOW THERE IS A SPACE Before %c and BETWEEN " AND  %c .......

   printf("The Age is :");
   scanf("%d", &age);

   printf("Enter price :");
   scanf("%f", &price);

   printf("Your grade is = ");
   scanf(" %c", &grade);

   /*

For Arrays Specifically the name of the array i.e in this case "name" 
Itself is enough to tell the input the address '&' Hence is not required......

SCANSETS****

//Whitelisting a scanset [0-9] , Will Only Accept 0-9 and stop when encounters anything diff..

//Blacklisting a scanset [^0-9] , Will stop as soon as it encounters a number......

eg : scanf("%[^A]", name) , this accepts everything but terminates as soon as it encounters A
 
//Creating a range [a-z] , [0-9] , [0-9a-zA-Z]
   */

   printf("Enter your name =");
   scanf(" %[0-9a-zA-Z]", name);

   printf("\n");

   printf("Age = %d\n", age);
   printf("Price = %.2f\n", price);
   printf("Grade = %c\n", grade);
   printf("Name = %.20s\n", name);



//Taking the string input using 'fgets'

//getchar(); => It used to clear input buffer \n

//since fgets() gets terminated upon encountering and gobbling a '\n'


   getchar();

   printf("Enter your full name:");
   fgets(name , sizeof(name), stdin);
   name[strlen(name)-1]='\0';
   printf("Name is : %s\n", name);
   printf("Program Ends");


   return 0;




}