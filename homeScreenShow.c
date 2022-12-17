#include "main.h"

void homeScreenShow()
{
    char c;

    do {
        printf("\nType a number corresponding to an option to run the command\n\n");
        printf("1. Log in\n");
        printf("2. Register\n");
        printf("3. Exit\n");

        c = getchar();
    } while (c != '1' && c != '2' && c != '3');

    homeScreenAction(c);
}