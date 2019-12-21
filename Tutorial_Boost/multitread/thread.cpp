#include <iostream>  
#include <boost/thread.hpp>   
#include <boost/bind.hpp>
#include <Windows.h>

using namespace std;

HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE);

void f()
{ 
  {
    boost::this_thread::disable_interruption di;
    string n = "";
    for (int i = 0; i < 20; i++)
     n += " ";
  }

  for (int i = 0; i < 100; i++)
  {
    //SetConsoleTextAttribute(hwnd, FOREGROUND_GREEN | FOREGROUND_INTENSITY);

    cout << n << i << endl;
  }
}

void g()
{
  for (int i = 0; i < 100; i++)    
  {
    //SetConsoleTextAttribute(hwnd, FOREGROUND_RED | FOREGROUND_INTENSITY);

    cout << i << endl;
  }
}

int main()
{
  //using namespace boost::posix_time;

  boost::thread_group tgroup;

  tgroup.create_thread( boost::bind( &f ) );



  tgroup.create_thread( boost::bind( &g ) );


  tgroup.join_all();

  SetConsoleTextAttribute(hwnd, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
  system("PAUSE");
  return 0;
}