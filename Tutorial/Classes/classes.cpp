//File:   main.cpp
//Date:   2014-02-03
//Author: Zachary Gill
//Main source

#include <iostream>
#include "rectangle.h"
#include "square.h"
using namespace std;


//______________________________________________________________________________
int main()
{
  Rectangle rect1 (20, 15);
  //rect1.setValues(20, 15);
  cout << rect1.area() << endl;
  if (rect1.isSquare()) {
    cout << "This rectangle is a square.";
  }
  else {
    cout << "This rectangle is not a square.";
  }

  cout << endl << endl;

  Rectangle rect2 (50, 50);
  //rect2.setValues(50, 50);
  cout << rect2.area() << endl;  
  if (rect2.isSquare()) {
    cout << "This rectangle is a square.";
  }
  else {
    cout << "This rectangle is not a square.";
  }

  cout << endl << endl;

  Square square (20);
  cout << square.area() << endl;
  if (square.isSquare()) {
    cout << "This rectangle is a square.";
  }
  else {
    cout << "This rectangle is not a square.";
  }

  cout << endl;
  system("PAUSE");

  return 0;
}