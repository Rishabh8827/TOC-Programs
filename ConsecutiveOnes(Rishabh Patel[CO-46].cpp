/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int
main ()
{
  string bin;
  cout << "Enter Binary Number : ";
  cin >> bin;
  int size = bin.size ();
  if (bin[size - 1] == '1' && bin[size - 2] == '1' && bin[size - 3] == '1')
    {
      cout << "Valid : The Last 3 Binary Number is 3 Consecutive 1's\n";
    }
  else
    {
      cout << "Invalid! The Last 3 Binary Number isn't 3 Conseucutive 1's\n";
    }
  return 0;
}
