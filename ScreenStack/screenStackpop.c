#include "screenStack.h"

/**
 * screenStackPop - Pops a screen from stack
 * @screen: Given stack
 * Return: Next screen on stack
 */
screen_t *screenStackPop(screen_t **screen)
{
    screen_t *temp;
    char *screenName;
    /*screen_t screens[] = {
        {"welcomeScreenShow", welcomeScreenShow},
        {"registerScreenShow", registerScreenShow},
        {NULL, NULL}
    };*/

    if (!screenStackExists(screen))
        screenStackError(STACK_NOT_EXISTS);

    if (*screen == NULL)
        screenStackError(STACK_EMPTY);
    
    screenName = (*screen)->name;
    /*
    actual code to run last function should come here though
    ========================================================
    */

    temp = *screen;
    *screen = (*screen)->next;
    free(temp);
    temp = NULL;

    return (*screen);
}