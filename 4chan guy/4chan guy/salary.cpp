//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//  //declare variables
//  char c;
//
//  double regular;
//  double overtime;
//  double gross;
//  double fica;
//  double medicare;
//  double hi;
//  double net;
//
//  do {
//
//    //input
//    cout << "Press m for management or h for hourly: ";
//    cin >> c;
//    c = toupper(c);
//
//    //calculations
//    if (c == 'M') {
//      double pay;
//      char period;
//
//      cout << "What is your annual pay?: ";
//      cin >> pay;
//
//      do {
//        cout << "What is the pay period? (weekly (\"w\" or \"W\"), bi-weekly (\"b\" or \"B\") or monthly (\"m\" or \"M\")): ";
//        cin >> period;
//
//        period = toupper(period);
//        if (period == 'W') {
//          gross = pay / 52.0;
//        }
//        else if (period == 'B') {
//          gross = pay / 26.0;
//        }
//        else if (period == 'M') {
//          gross = pay / 12.0;
//        }
//        else {
//          cout << "Invalid input, try again." << endl;
//        }
//      } while (period != 'W' && period != 'B' && period != 'M');
//
//    }
//    else if (c == 'H') {
//      double hourly;
//      double hours;
//
//      cout << "What is the hourly rate of pay?: ";
//      cin >> hourly;
//      cout << "What if the number of hours worked?: ";
//      cin >> hours;
//
//      if (hours > 40.0) {
//        int extrahours = hours - 40.0;
//        regular = 40.0 * hourly;
//        overtime = extrahours * (hourly * 1.5);
//      }
//      else {
//        regular = hours * hourly;
//        overtime = 0.0;
//      }
//      gross = regular + overtime;
//
//    }
//    else {
//      cout << "Invalid input, try again." << endl;
//    }
//
//  } while (c != 'M' && c != 'H');
// 
//  fica = gross * 0.07;
//  medicare = gross * 0.02;
//  hi = gross * 0.1;
//  net = gross - fica - medicare - hi;
//
//
//  //output
//  cout.setf(ios::fixed);
//  cout.setf(ios::showpoint);
//  cout.precision(2);
//  if (c == 'H') {
//    cout << "Regular Pay:         " << regular << endl;
//    cout << "Overtime Pay:        " << overtime << endl;
//  }
//  cout << "Gross Pay:           " << gross << endl;
//  cout << "Deductions:          " << endl;
//  cout << "  FICA:             -" << fica << endl;
//  cout << "  Medicare:         -" << medicare << endl;
//  cout << "  Health Insurance: -" << hi << endl;
//  cout << endl;
//  cout << "NET Pay:             " << net << endl;
//
//
//  return 0;
//}