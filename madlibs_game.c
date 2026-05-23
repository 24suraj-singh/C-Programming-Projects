#include <stdio.h>
#include <string.h>
int main(){

    printf("Lets Plays MadLibs \n");
    char noun[40]= "";
    char verb[40]= "";
    char adj1[40] = "";
    char adj2[40] = "";
    char adj3[40] = "";


    printf("Enter a noun (Name , Object) : ");
    fgets(noun,sizeof(noun),stdin);
    noun[strlen(noun)-1]= '\0';

    printf("Enter a verb (Ends with -ing) : ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb)-1]= '\0';

    printf("Enter 1st Adjective : ");
    fgets(adj1, sizeof(adj1), stdin);
    adj1[strlen(adj1)-1]='\0';
    
    printf("Enter 2nd Adjective : ");
    fgets(adj2,sizeof(adj2), stdin);
    adj2[strlen(adj2)-1]='\0';

    printf("Enter 3rd Adjective : ");
    fgets(adj3,sizeof(adj3),stdin);
    adj3[strlen(adj3)-1]='\0';


    printf("STORY!!\n");

    printf("I met %s today at school.\n", noun);

    printf("It was very %s and %s at school...\n", adj2,adj1);

    printf("All we did today was %s...but that got teacher %s.\n", verb , adj3);

    printf("THANK YOU");
    

    return 0;



}