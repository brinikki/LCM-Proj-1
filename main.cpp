#include <iostream>
using namespace std;

int main()
{

  int num1;
  int num2;
  int lcm;
  int i;
  int multiple1;
  int multiple2;


  cout << endl;
  cout << "What is the first number? ";
  cin >> num1;

  cout << "What is the second number? ";
  cin >> num2;

  cout << endl;

  cout << "\033[93mFirst 10 factors of the first number: \033[0m" << endl;
 
  for ( int i = 1; i <= 10; i++ )
  {
    multiple1 = num1 * i;
    cout << multiple1 << ", ";

  }
 
  cout << "..." << endl;
  cout << endl;

  cout << "\033[93mFirst 10 factors of the second number: \033[0m" << endl;
 
  for ( int i = 1; i <= 10; i++ )
  {
    multiple2 = num2 * i;
    cout << multiple2 << ", ";

  }

  cout << "..." << endl;
  cout << endl;

for (int i = 10; i >= 1; i--)
  {
    multiple1 = num1 * i;
    for (int i = 10; i >= 1; i--)
    {
      multiple2 = num2 * i;
      if(multiple1 == multiple2)
      lcm = multiple1;
    }
  }
 
  cout << "\033[93mLCM: \033[0m" << lcm << endl;
 
  return 0;
}