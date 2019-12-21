#include <iostream>
#include <string>
#include <map>

using namespace std;

namespace CORE
{
  void testing();
} ;


//typedef void (*FnPtr)();

class CommandMap
{
  public:
    map<string, int> createMap()
    {
      map<string, int> m;
      m["a"] = 5;
      m["b"] = 8;
      return m;
    }
} ;




void CORE::testing()
{
cout << "tested" << endl;
//cout << data["a"] << endl;
}




int main()
{
void (*FuncPtr)();
FuncPtr = &CORE::testing;


  FuncPtr();
  cout << dfataf["b"] << endl;

  system("PAUSE");
  return 0;
}


