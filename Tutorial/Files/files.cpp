//File:   files.cpp
//Date:   2014-03-15
//Author: Zachary Gill

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{
  fstream myfile;
  myfile.open("example.txt", fstream::out);
  myfile << "Writing this to a file." << endl << 5198132 << endl;
  myfile.close();

  myfile.open("example.txt", fstream::app);
  myfile << "testing" << endl;
  myfile.close();



  fstream  myfile2;
  myfile2.open("example.txt", fstream::in);
  
  string a = "";
  int    b = 0;
  string c = "";
  string tmp = "";

  if (myfile2.is_open())
  {
    getline(myfile2, a);

    myfile2 >> b;
    getline(myfile2, tmp);

    getline(myfile2, c);

    myfile2.close();
  }


  cout << a << endl
       << b << endl
       << c << endl;


  system("PAUSE");
  return 0;
}