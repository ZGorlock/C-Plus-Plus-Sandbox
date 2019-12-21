#include <iostream>
#include <Windows.h>

using namespace std;


HANDLE h_ = GetStdHandle(STD_OUTPUT_HANDLE);


int main()
{
	cout << "Hello world!" << endl << endl;

  ShellExecute(h_, "open", "log.log", NULL, "data", SW_HIDE);

	system("PAUSE");
	return 0;
}