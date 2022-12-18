#include "screenStack.h"

/**
 * screenStackError - Function to handle screen stack errors
 * @errorNumber: The error number
 * Return: Nothing
 */
void screenStackError(unsigned int errorNumber)
{
    switch (errorNumber) {
        case MEMORY_FAIL:
            fprintf(stderr, "Memory allocation failed\n");
            exit(EXIT_FAILURE);
            break;
        case STACK_EMPTY:
            fprintf(stderr, "Can't pop on empty stack\n");
            exit(EXIT_FAILURE);
            break;
        case STACK_NOT_EXISTS:
            fprintf(stderr, "Stack does not exist\n");
            exit(EXIT_FAILURE);
            break;
        default:
            exit(EXIT_FAILURE);
    }
}