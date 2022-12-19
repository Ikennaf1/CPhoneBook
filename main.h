#ifndef _CPB_
#define _CPB_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "sqlite/sqlite3.h"
#include "ScreenStack/screenStack.h"

extern screen_t *screenStack;

void dbInit();
void cpbRun();
void cpbExit();
void welcomeScreenShow();
void welcomeScreenAction(char c);
void registerScreenShow();
void loginScreenShow();
int userRegister(char *username, char *password);

#endif /* _CPB_ */
