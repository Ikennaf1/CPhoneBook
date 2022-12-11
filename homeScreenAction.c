#include "main.h"

void homeScreenAction(char c)
{
    switch (c) {
        case '1':
            printf("Option 1 selected\n");
            break;
        case '2':
            registerScreenShow();
            break;
        case '3':
            printf("Option 3 selected\n");
            break;
        default:
            homeScreenShow();
            break;
    }
}