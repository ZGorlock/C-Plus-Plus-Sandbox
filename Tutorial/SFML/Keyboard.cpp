#include <iostream>
#include "Windows.h"

#include <boost/thread/thread.hpp>

using namespace std;

int main()
{
	while (true)
	{
		boost::this_thread::sleep(boost::posix_time::milliseconds(100));
		cout << GetAsyncKeyState(VK_SPACE) << endl; //-32767
	}
}