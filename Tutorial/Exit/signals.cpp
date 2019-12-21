#define  NTDDI_VERSION 0x05010000
#define  WINVER        0x0501
#define _WIN32_WINNT   0x0501
#define _WIN32_IE      0x0500

#include <iostream>
//#include <csignal>
#include <Windows.h>

#include <boost/thread/thread.hpp>

using namespace std;
using namespace boost::posix_time;




BOOL WINAPI ConsoleHandler(DWORD CEvent)
{
    //char mesg[128];

    switch(CEvent)
    {
    case CTRL_C_EVENT:
        break;
    case CTRL_BREAK_EVENT:
        MessageBox(NULL, "CTRL+BREAK received!","CEvent",MB_OK);
        return false;
        break;
    case CTRL_CLOSE_EVENT:
        MessageBox(NULL, "Program being closed!","CEvent",MB_OK);
        return false;
        break;
    case CTRL_LOGOFF_EVENT:
        MessageBox(NULL, "User is logging off!","CEvent",MB_OK);
        return false;
        break;
    case CTRL_SHUTDOWN_EVENT:
        MessageBox(NULL, "User is logging off!","CEvent",MB_OK);
        return false;
        break;
    }
    return true;
}

int main ()
{
  using namespace boost::this_thread;

    SetConsoleCtrlHandler(ConsoleHandler, true);

    for (int i = 0; i < 20; i ++) {
       cout << i << endl;
       sleep(seconds(1));
    }

    return 0;
}