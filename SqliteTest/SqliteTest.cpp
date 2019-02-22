// VSCMake.cpp: 定义应用程序的入口点。
//

#include "SqliteTest.h"
#include <sqlite3.h>
#include <stdio.h>
using namespace std;

int main()
{
	printf("%s\n", sqlite3_libversion());
	return 0;
}
