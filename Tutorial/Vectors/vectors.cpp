#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<double> vec;

  //double value;
  //do {
  //  cout << "Add to the vector (0 to finish): ";
  //  cin >> value;
  //  vec.push_back (value);
  //} while (value != 0.0);
  //vec.pop_back();

  for (int i = 0; i < 20; i++)
    vec.push_back (i);


  //modify contents of vec
  vec.erase(vec.begin() + 5); //remove 6th element
  vec.insert(vec.begin() + 5, 50); // insert 50 as new 6th element
  
  //more efficient version of above
  vec[6] = 100; //converts 6th element to value 100


  cout << endl << endl;


  //print vec
  for (size_t i = 0; i < vec.size(); i++)
    cout << vec[i] << endl;


  //empty vector
  cout << endl << endl;
  cout << vec.empty() << endl; //checks if vec is empty
  vec.clear(); 
  cout << vec.empty() << endl; //checks if vec is empty
  cout << vec.size() << endl; //size is set to 0


	system("PAUSE");
	return 0;
}