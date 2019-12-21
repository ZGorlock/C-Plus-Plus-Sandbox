#include <iostream>
using namespace std;

int main()
{
	//while loop
	int x = 0;
	while (x < 10)
	{
		cout << x << endl;
		x++;
	}

	//for loop
	for(int x = 0; x < 10; x++)
	{
		cout << x << endl;
	}

	//do while loop
	x = 0;
	do
	{
		cout << x << endl;
		x++;
	}while(x < 10);

	cout << endl;
	system("PAUSE");

	return 0;
}