#include "screenStack.h"

/**
 * screenStackFree - Fress the screen stack
 * Return: Void
 */
void screenStackFree(screen_t **screen)
{
    screen_t *temp;

    if (!screenStackExists(screen))
        screenStackError(STACK_NOT_EXISTS);
    
    while (*screen != NULL) {
        temp = *screen;
        *screen = (*screen)->next;
        free(temp);
        temp = NULL;
    }
    free(screen);
    screen = NULL;
}