#include "main.h"

void welcomeScreenAction(char c)
{
    switch (c) {
        case '1':
            loginScreenShow();
            break;
        case '2':
            registerScreenShow();
            // welcomeScreenShow();
            break;
        case '3':
            printf("Option 3 selected\n");
            break;
        default:
            welcomeScreenShow();
            break;
    }
}