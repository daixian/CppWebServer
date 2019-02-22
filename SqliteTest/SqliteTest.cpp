#include "SqliteTest.h"
#include <sqlite3.h>
#include <stdio.h>
using namespace std;

int main()
{
    printf("%s\n", sqlite3_libversion());

    sqlite3 *db;
    char *zErrMsg = 0;
    int rc;

    rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        return (0);
    }
    else {
        fprintf(stderr, "Opened database successfully\n");
    }
    sqlite3_close(db);

    getchar();
    return 0;
}
