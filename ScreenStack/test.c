#include "screenStack.h"

int main(void)
{
    screen_t **screen = screenStackCreate();
    screenStackPush(screen, "UserScreen");
    screenStackPrintAll(screen);
    screenStackPush(screen, "RegScreen");
    screenStackPush(screen, "LoginScreen");
    screenStackPush(screen, "PlayScreen");
    screenStackPrintAll(screen);
    screenStackPop(screen);
    screenStackPop(screen);
    screenStackPrintAll(screen);
    screenStackFree(screen);
    /*screenStackPrintAll(screen);*/

    return (0);
}