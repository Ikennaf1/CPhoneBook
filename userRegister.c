#include "main.h"

int userRegister(char *username, char *password)
{
    sqlite3 *db;
    char *dbErrMsg = 0;
    int rc;
    sqlite3_stmt *ppStmt;
    const char *pzTail;

    char *sql = "\
        INSERT INTO `users` (\
            username,\
            password\
        ) VALUES (\
            ?, ?\
        )\
    ";

    rc = sqlite3_open("cpb.db", &db);

    if (rc) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        return (0);
    } else {
        // fprintf(stdout, "Database opened successfully\n");
    }

    rc = sqlite3_prepare_v2(db, sql, -1, &ppStmt, &pzTail);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "Prepare fail: %s", sqlite3_errmsg(db));
        return (0);
    }

    sqlite3_bind_text(ppStmt, 1, username, -1, SQLITE_STATIC);
    sqlite3_bind_text(ppStmt, 2, password, -1, SQLITE_STATIC);
    if (sqlite3_step(ppStmt) == SQLITE_DONE) {
        return (1);
    } else {
        fprintf(stderr, "Insert fail: %s", sqlite3_errmsg(db));
        return (0);
    }
}