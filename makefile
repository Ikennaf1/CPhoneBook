mystack = ScreenStack/screenStackAll.c
stack: $(mystack)

myc = main.h dbinit.c cpbRun.c welcomeScreenShow.c welcomeScreenAction.c registerScreenShow.c loginScreenShow.c userRegister.c main.c

sql: sqlite/sqlite3.c

cpb:
	gcc -c $(mystack) -o stack && gcc -c sqlite/sqlite3.c -o sql && gcc sql stack $(myc) -o cpb