#include "screenStack.h"

/**
 * screenStackPrintAll - Prints all screens on stack
 * @screen: Given stack
 * Return: Void
 */
void screenStackPrintAll(screen_t **screen)
{
    screen_t *temp;
    unsigned int count = 0;

    /*if (!screenStackExists(screen))
        screenStackError(STACK_NOT_EXISTS);*/
    
    temp = *screen;
    while (temp && temp->name) {
        printf("%u: %s\n", ++count, temp->name);
        temp = temp->next;
    }
}

/*
This function keeps printing garbage value when a null value is 
supplied as an argument
*/