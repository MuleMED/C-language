#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
#include <unistd.h>

int main(){
printf("\n********************************\n");
printf("**** Welcome to the GAMEHUB ****\n");
printf("********************************\n");

printf("Enter your username here: ");
char username[100];
scanf("%s", username);

printf("Hello, %s! Welcome to the new words game that I hope you find it amazing\n", username);

do {
    printf("Would you like to play the game? (y/n): ");
    char choice;
    scanf("%c", &choice);
    if (choice == 'y' || choice == 'Y') {
        printf("Okay, let's get started!\n");
        break;
    } else if (choice == 'n' || choice == 'N') {
        printf("Okay, see you next time!\n");
        break;
    } else {
        printf("Please enter either 'y' or 'n'\n");
    }
}
while (1);



    return 0;
}