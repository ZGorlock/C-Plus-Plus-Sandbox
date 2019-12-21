#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name = "";
	int age = 0;

	cout << "Enter your name: ";
	cin >> name;

	cout << "Enter your age: ";
	cin >> age;

	cout << "Your name is: " << name << "." << endl << "Your age is: " << age << "." << endl << endl;
	system("PAUSE");

	return 0;
}