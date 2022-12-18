#include "screenStack.h"

/**
 * screenStackCreate - Creates the stack for the program
 * Return: Void
 */
screen_t **screenStackCreate()
{
    screen_t **screen = NULL;

    screen = (screen_t **) malloc(sizeof(screen_t **));
    if (screen == NULL)
        screenStackError(MEMORY_FAIL);
    
    *screen = NULL;

    return (screen);
}