#include "main.h"

int main(void)
{
    // Initialize database
    dbInit();
    
    // run CPhoneBook
    cpbRun();

    //Clear and exit
    // cpbExit();

    return (0);
}