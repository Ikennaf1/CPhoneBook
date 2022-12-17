#include "main.h"

static int callback(void *unused, int count, char **data, char **columns)
{
    int idx;

    for (idx = 0; idx < count; idx++)
        ;

    return 0;
}

void dbInit()
{
    sqlite3 *db;
    char *dbErrMsg = 0;
    int rc;
    char *users = "\
        CREATE TABLE IF NOT EXISTS `users` (\
            `id` UNSIGNED INTEGER PRIMARY KEY,\
            `username` VARCHAR (32) UNIQUE NOT NULL,\
            `password` VARCHAR(128) NOT NULL,\
            `created_at` DATETIME NOT NULL DEFAULT CURRENT_TIMESTAMP,\
            `modified_at` DATETIME NULL\
        )\
    ";
    char *contacts = "\
        CREATE TABLE IF NOT EXISTS `contacts` (\
            `id` INTEGER PRIMARY KEY,\
            `first_name` VARCHAR(64) NOT NULL,\
            `last_name` VARCHAR(64) NULL,\
            `phone_number` VARCHAR(16) NULL,\
            `email` VARCHAR(64) NULL,\
            `address` VARCHAR(128) NULL,\
            `created_at` DATETIME NOT NULL DEFAULT CURRENT_TIMESTAMP,\
            `modified_at` DATETIME NULL\
        )\
    ";

    rc = sqlite3_open("cpb.db", &db);

    if (rc) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
    }

    // Create users table
    rc = sqlite3_exec(db, users, callback, 0, &dbErrMsg);

    if (rc) {
        fprintf(stderr, "Can't create table: %s\n", sqlite3_errmsg(db));
    }

    // Create contacts table
    rc = sqlite3_exec(db, contacts, callback, 0, &dbErrMsg);

    if (rc) {
        fprintf(stderr, "Can't create table: %s\n", sqlite3_errmsg(db));
    }

    sqlite3_close(db);
}