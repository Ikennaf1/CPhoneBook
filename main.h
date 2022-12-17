#ifndef _CPB_
#define _CPB_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "Structs/screen.h"
#include "sqlite/sqlite3.h"

void dbInit();
void cpbRun();
void cpbExit();
void homeScreenShow();
void homeScreenAction(char c);
void registerScreenShow();
int userRegister(char *username, char *password);

#endif /* _CPB_ */
