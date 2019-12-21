//File:   fstream.cpp
//Date:   2014-03-16
//Author: Zachary Gill

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void readFile(fstream& fs)
{
  string a = "";
  int b = 0;
  string c = "";

  getline(fs, a);
  fs >> b;
  getline(fs, c);

  cout << a << endl << b << endl << c << endl;
}

int main()
{
  fstream myfile;
  myfile.open("example.txt", fstream::in);
  readFile(myfile);
  myfile.close();

  system("PAUSE");
  return 0;
}