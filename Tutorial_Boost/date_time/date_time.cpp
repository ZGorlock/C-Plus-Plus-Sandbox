#include <iostream>
#include <boost/date_time/gregorian/gregorian.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/thread/thread.hpp>

using namespace std;
using namespace boost::gregorian;
using namespace boost::posix_time; 

int main()
{
    ptime Jan1st1970(date(1970, 1, 1));
    for(int i = 0; i < 10; i++)
    {
    	ptime Now = microsec_clock::local_time();
    	time_duration diff = Now - Jan1st1970;
    	cout << Now << "  :  " << diff.total_seconds() << "." << diff.fractional_seconds() << endl;
      boost::this_thread::sleep(boost::posix_time::milliseconds(25));
    }
    system("PAUSE");
    return 0;
}