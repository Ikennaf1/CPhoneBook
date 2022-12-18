#ifndef _SCREEN_STACK_H
#define _SCREEN_STACK_H

#include <stdio.h>
#include <stdlib.h>

#define MEMORY_FAIL         100
#define STACK_EMPTY         200
#define STACK_NOT_EXISTS    300

/**
 * struct screen - The struct for the screen
 * @name: The name or definition of screen
 * @next: Pointer to the next screen in list
 * @f: The function to call
 */
typedef struct screen
{
    char *name;
    struct screen *next;
    void (*f)();
} screen_t;

screen_t **screenStackCreate();
void screenStackError(unsigned int errorNumber);
screen_t *screenStackPush(screen_t **screen, char *name);
screen_t *screenStackPop(screen_t **screen);
void screenStackFree(screen_t **screen);
void screenStackPrintAll(screen_t **screen);
int screenStackExists(screen_t **stack);

#endif /* _SCREEN_STACK_H */