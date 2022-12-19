#include "main.h"

void welcomeScreenShow(void)
{
    char c;
    short int count = 0;
    screenStackCreate();

    do {
        fflush(stdin);
        if (count == 1)
            printf("\n*** Wrong number input ***");
        count = 0;

        printf("\nType a number corresponding to an option to run the command\n\n");
        printf("1. Log in\n");
        printf("2. Register\n");
        printf("9. Exit\n");

        printf("Enter Number: ");

        c = getchar();
        count = 1;
    } while (c != '1' && c != '2' && c != '9');

    welcomeScreenAction(c);
}