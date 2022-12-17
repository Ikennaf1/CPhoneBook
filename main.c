#include "main.h"

int main(void)
{
    printf("\n\n\
        ######     ########      ########\n\
       ###   ###   ##########    ###    ###\n\
     ###      ##   ###     ###   ###     ###\n\
     ###           ###      ##   ###    ###\n\
     ###           ###     ##    ########\n\
     ###           #########     ###    ###\n\
      ##      ##   ###           ###     ###\n\
       ###   ###   ###           ###     ###\n\
        ######     ###           ##########\n\
    ");

    printf("\n\t*** Welcome to C PhoneBook! ***\n");

    
    // Initialize database
    dbInit();

    // run CPhoneBook
    cpbRun();

    //Clear and exit
    // cpbExit();

    return (0);
}