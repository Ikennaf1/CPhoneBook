#include "main.h"

void loginScreenShow(void)
{
    char *username;
    char *password;
    short int count = 0;

    printf("\n*** LOGIN SCREEN ***\n");

    do {
        fflush(stdin);
        if (count == 1)
            printf("\n*** Wrong username or password ***\n");
        count = 0;

        printf("\nEnter username: ");
        scanf("%s", &username);
        printf("\nEnter password: ");
        scanf("%s", &password);
        count = 1;
    } while (/*userLogin(username, password) == */0);
}