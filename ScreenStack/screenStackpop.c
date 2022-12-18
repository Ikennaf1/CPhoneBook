#include "screenStack.h"

/**
 * screenStackPop - Pops a screen from stack
 * @screen: Given stack
 * Return: Next screen on stack
 */
screen_t *screenStackPop(screen_t **screen)
{
    screen_t *temp;
    
    if (!screenStackExists(screen))
        screenStackError(STACK_NOT_EXISTS);

    if (*screen == NULL)
        screenStackError(STACK_EMPTY);
    
    temp = *screen;
    *screen = (*screen)->next;
    free(temp);
    temp = NULL;

    return (*screen);
}