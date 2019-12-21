//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//  //declare variables
//  char in;
//  int units;
//  double priceA;
//  double priceB;
//  double priceC;
//
//  do {
//    //input package
//    do {
//      cout << "Which package are you shopping for? (enter A, B, C)? ";
//      cin >> in;
//      in = toupper(in);
//      if (in != 'A' && in != 'B' && in != 'C')
//        cout << "Enter only A, B, C." << endl << endl;
//    } while (in != 'A' && in != 'B' && in != 'C');
//
//    //input units
//    do {
//      cout << "How many message units? ";
//      cin >> units;
//      if (units < 0 || units > 672)
//        cout << "Enter a number from 0 through 672 for message units." << endl << endl;
//    } while (units < 0 || units > 672);
//    
//    //calculations
//    priceA = 10.95;
//    if (units - 10 > 0)
//      priceA += ((units - 10) * .5);
//    priceB = 19.95;
//    if (units - 20 > 0)
//      priceB += ((units - 20) * .25);
//    priceC = 39.95;
//
//    //output
//    cout.setf(ios::fixed);
//    cout.setf(ios::showpoint);
//    cout.precision(2);
//    switch (in) {
//      case 'A':
//        cout << "The charges are $" << priceA << endl;
//        if (priceB < priceA)
//          cout << "By switching to Package B you would save $" << (priceA - priceB) << endl;
//        if (priceC < priceA)
//          cout << "By switching to Package C you would save $" << (priceA - priceC) << endl;
//        break;
//      case 'B':
//        cout << "The charges are $" << priceB << endl;
//        if (priceA < priceB)
//          cout << "By switching to Package A you would save $" << (priceB - priceA) << endl;
//        if (priceC < priceB)
//          cout << "By switching to Package C you would save $" << (priceB - priceC) << endl;
//        break;
//      case 'C':
//        cout << "The charges are $" << priceC << endl;
//        if (priceA < priceC)
//          cout << "By switching to Package A you would save $" << (priceC - priceA) << endl;
//        if (priceB < priceC)
//          cout << "By switching to Package B you would save $" << (priceC - priceB) << endl;
//        break;
//    }
//    cout << endl;
//
//    //continue?
//    cout << "Do you want more quotes (y/n)?" << endl;
//    cin >> in;
//    in = toupper(in);
//    cout << endl;
//  } while (in != 'N');
//
//  cout << "Thank you for using this program. Goodbye!" << endl;
//  return 0;
//}