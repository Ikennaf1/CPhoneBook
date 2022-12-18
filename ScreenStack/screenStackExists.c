#include "screenStack.h"

/**
 * screenStackExists - Checks if given stack exist
 * @stack: The given stack
 * Return: 1 if exist, otherwise 0
 */
int screenStackExists(screen_t **screen)
{
    if (screen)
        return (1);
    return (0);
}