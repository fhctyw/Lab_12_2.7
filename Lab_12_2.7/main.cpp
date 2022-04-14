#include <iostream>
#include <Windows.h>
#include "Cursor.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	LongLong l1, l2;
    cin >> l1;
    cin >> l2;

    cout << l1 + l2 << endl;
    cout << l1 - l2 << endl;
    cout << l1 * l2 << endl;
    cout << l1 / l2 << endl;

    Cursor cur;
    cout << cur << endl;
    cin >> cur;
    cout << cur << endl;

    cur.move(31, 4);
    cout << cur << endl;


	return 0;
}