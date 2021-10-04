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
  int ones = 0, zeros = 0;
  cout << "Enter Binary Number : ";
  cin >> bin;
  int size = bin.size ();
  for (int i = 0; i < size; i++)
    {
      if (bin[i] == '1')
	{
	  ones++;
	}
      else if (bin[i] == '0')
	{
	  zeros++;
	}
      else
	{
	  cout << "Error! Wrong Binary Number Entered\n";
	  ones = -1;
	  break;
	}
    }
  if (ones != -1)
    {
      cout << "Machine Is checking The Binary Number........\n";
    }

  if (ones == zeros && ones != -1)
    {
      cout << "\nValid! The Given Binary Number is Accepted\n";
    }
  else if (ones == -1)
    {
      cout << "\nPlease Enter A Valid Binary Number !!!\n";
    }
  else
    {
      cout << "\nInvalid! The Given Binary Number Is Not Accepted\n";
    }
  return 0;
}
