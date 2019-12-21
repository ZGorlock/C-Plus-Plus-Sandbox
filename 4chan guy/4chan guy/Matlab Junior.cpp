//#include <iostream>
//
//using namespace std;
//
//int    menu();
//double squareRoot(double);
//double powerOf(double, int);
//void   primeNumbers(int);
//double hypotenuse(double, double);
//
//int main()
//{
//  int option;
//  
//  //main loop
//  while ((option = menu()) != 5) {
//    int    n, y;
//    double a, b, p, x;
//
//    switch (option) {
//      case 1: //Compute the square root of a double using the Babylonian algorithm 
//        cout << "Enter a value to compute the square root of:";
//        cin >> p;
//
//        cout << "The square root of " << p << " is " << squareRoot(p) << endl << endl;
//
//        break;
//      case 2: //Compute X raised to the Y power
//        cout << "Enter a value:";
//        cin >> x;
//        cout << "What value would you like to raise it to?:";
//        cin >> y;
//
//        cout << x << " raised to the power of " << y << " is " << powerOf(x, y) << endl << endl;
//
//        break;
//      case 3: //Print out prime numbers up to a pre-specified number
//        cout << "Enter a number up to which all prime numbers will be printed:";
//        cin >> n;
//
//        cout << "Prime numbers up to " << n << ":" << endl;
//        primeNumbers(n);
//        cout << endl;
//
//        break;
//      case 4: //The value of the hypotenuse of a right triangle.
//        cout << "Enter the length of side A of the triangle:";
//        cin >> a;
//        cout << "Enter the length of side B of the triangle:";
//        cin >> b;
//
//        cout << "The length of the hypotenuse of the triangle is " << hypotenuse(a, b) << endl << endl;
//
//        break;
//    }
//  }
//
//  return 0;
//}
//
//int menu()
//{
//  int a = -999;
//
//  do {
//    if (a != -999) //if the user enters an invalid input display this message
//      cout << "Invalid input, please try again." << endl << endl;
//    cout << "MatLab Junior" << endl
//         << "  1) Compute the square root of a double using the Babylonian algorithm" << endl
//         << "  2) Compute X raised to the Y power" << endl
//         << "  3) Print out prime numbers up to a pre-specified number" << endl
//         << "  4) The value of the hypotenuse of a right triangle." << endl
//         << "  5) Quit the Program" << endl
//         << "Please enter a number (1-5) ->";
//    cin >> a;
//  } while (!(a > 0 && a < 6)); //test for valid input
//  
//  cout << endl;
//  return a;
//}
//
//double squareRoot(double n)
//{
//  int BABYLONIAN_ITERATIONS = 10; //number of times to repeat babylonian algorithm
//
//  double guess = n;
//
//  //compute square root
//  for (int i = 0; i < BABYLONIAN_ITERATIONS; i++) {
//    double tmp = n / guess;
//    guess = (guess + tmp) / 2;
//  }
//
//  //4 decimal places
//  guess *= 10000;
//  guess = (int)guess;
//  guess /= 10000;
//
//  return guess;
//}
//
//double powerOf(double x, int y)
//{
//  double p = x;
//
//  //multiply by itself y times
//  for (int i = 1; i < y; i++)
//    p *= x;
//
//  return p;
//}
//
//void primeNumbers(int n)
//{
//  // all numbers from 2 to n
//  for (int i = 2; i < n; i++) {
//    bool isPrime = true;
//    
//    //test if i is prime
//    for (int j = 2; j <= squareRoot(i); j++) {
//      if (i % j == 0)
//        isPrime = false;
//    }
//
//    //if it is print it
//    if (isPrime)
//      cout << i << endl;
//  }
//}
//
//double hypotenuse(double a, double b)
//{
//  //a^2 + b^2 = c^2
//  double c;
//  c = powerOf(a, 2) + powerOf(b, 2);
//  c = squareRoot(c);
//  return c;
//}