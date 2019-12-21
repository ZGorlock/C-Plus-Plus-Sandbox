//#include <iostream>
//#include <string>
//#include <fstream>
//#include <cstdlib>
//
//using namespace std;
//
////constants
//const int ARRAY_MAX = 100;
//const int FNAME_LENGTH = 50;
//
////functions
//void getFilename(char[], bool);
//void openIFile(ifstream&, char[]);
//void openOFile(ofstream&, char[]);
//void processData(ifstream&, ofstream&);
//
//int main()
//{
//  //define variables
//  char ifilename[FNAME_LENGTH];
//  char ofilename[FNAME_LENGTH];
//  ifstream in;
//  ofstream out;
//
//  //open files
//  getFilename(ifilename, false);
//  openIFile(in, ifilename);
//  getFilename(ofilename, true);
//  openOFile(out, ofilename);
//
//  //process files
//  processData(in, out);
//
//  //close files
//  in.close();
//  out.close();
//
//  system("PAUSE");
//  return 0;
//}
//
////gets the filename from the user
//void getFilename(char out[], bool io)
//{
//  cout << "Please enter the ";
//  if (io)
//    cout << "output ";
//  else
//    cout << "input ";
//  cout << "file name: ";
//  cin >> out;
//}
//
////opens a file for input
//void openIFile(ifstream& file , char fname[])
//{
//  file.open(fname);
//  if (file.fail()) {
//    cout << "Input file failed to open" << endl;
//    exit(-1);
//  }
//}
//
////opens a file for output
//void openOFile(ofstream& file , char fname[])
//{
//  file.open(fname);
//  if (file.fail()) {
//    cout << "Output file failed to open" << endl;
//    exit(-1);
//  }
//}
//
////processes the file in into out
//void processData(ifstream& in, ofstream& out)
//{
//  int tmp, tmp2, species, total, count, totalAll, countAll;
//  string tmpStr;
//
//  in >> tmp;
//  in.ignore();
//  out << "Year - " << tmp << endl << endl;
//  in >> species;
//  in.ignore();
//  out << "Species - " << "Count: " << species << endl;
//  totalAll = 0;
//  countAll = 0;
//  for (int i = 0; i < species; i++) {
//    getline(in, tmpStr);
//    out << tmpStr << ": " << endl;
//    in >> count;
//    in.ignore();
//    countAll += count;
//    out << "  Populations:";
//    total = 0;
//    for (int j = 0; j < count; j++) {
//      in >> tmp2;
//      out << " " << tmp2;
//      total += tmp2;
//      totalAll += tmp2;
//    }
//    in.ignore();
//    out << endl;
//    out << "  Total:       " << total << endl;
//    out << "  Average:     " << (total / (double)count) << endl;
//  }
//  out << endl;
//  out << "Total:   " << totalAll << endl;
//  out << "Average: " << (totalAll / (double)countAll) << endl;
//}