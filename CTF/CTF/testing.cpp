#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  fstream fs;
  fs.open("a.txt", fstream::in);

  string in = "";
  string tmp = "";
  while (getline(fs, tmp))
    in += tmp;

  string out = "";
  for (size_t i = 0; i < in.length(); i++) {
    if (in[i] != 'x')
      out += in[i];
  }


  fstream fs2;
  fs2.open("b.txt", fstream::out);
  fs2 << out << endl;
  fs2.close();


  system("PAUSE");
  return 0;
}