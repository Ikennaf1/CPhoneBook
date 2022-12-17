#include "main.h"

void registerScreenShow()
{
    char username[32];
    char password[32];
    short int count = 0;

    printf("\nRegister new user:\n");

    do {
        fflush(stdin);
        if (count == 1)
            printf("\nSomething went wrong with User registration. Please try again.\n");
        count = 0;
        
        printf("\nEnter username: ");
        scanf("%s", username);

        printf("\nEnter password: ");
        scanf("%s", password);

        count = 1;
    } while (userRegister(username, password) != 1);
}