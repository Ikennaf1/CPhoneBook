#include "screenStack.h"

/**
 * screenStackPush - Pushes a screen element unto the screen stack
 * @name: The name of element
 * Return: Screen on top of stack (newly added screen)
 */
screen_t *screenStackPush(screen_t **screen, char *name)
{
    screen_t *new_screen = NULL;

    if (!screenStackExists(screen))
        screenStackError(STACK_NOT_EXISTS);

    new_screen = (screen_t *) malloc(sizeof(screen_t *));
    if (new_screen == NULL)
        screenStackError(MEMORY_FAIL);
    
    new_screen->next = NULL;
    new_screen->name = name;

    if (*screen == NULL) {
        *screen = new_screen;
    } else {
        new_screen->next = *screen;
        *screen = new_screen;
    }

    return (*screen);
}