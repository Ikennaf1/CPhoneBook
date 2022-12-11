#include "main.h"

void homeScreenShow()
{
    char c;

    // printf("\033[1;33m");
    // printf("We are just too cool");
    // printf("\033[0;m");

    printf("\n\n\
        ######     ########      ########\n\
       ###   ###   ##########    ###    ###\n\
     ###      ##   ###     ###   ###     ###\n\
     ###           ###      ##   ###    ###\n\
     ###           ###     ##    ########\n\
     ###           #########     ###    ###\n\
      ##      ##   ###           ###     ###\n\
       ###   ###   ###           ###     ###\n\
        ######     ###           ##########\n\
    ");

    printf("\n\t*** Welcome to C PhoneBook! ***\n");

    do {
        printf("\nType a number corresponding to an option to run the command\n\n");
        printf("1. Log in\n");
        printf("2. Register\n");
        printf("3. Exit\n");

        c = getchar();
    } while (c != '1' && c != '2' && c != '3');

    homeScreenAction(c);
}