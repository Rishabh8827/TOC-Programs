/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void
bin_incr (string bin)
{
  int size = bin.size ();
  int error = 0;
  int incr_done = 0;
  for (int i = size - 1; i >= 0; i--)
    {
      if (bin[i] == '1' || bin[i] == '0')
	{
	  if (bin[i] == '0')
	    {
	      bin[i] = '1';
	      incr_done = 1;
	    }
	  else if (i == 0 && incr_done == 0)
	    {
	      bin[i] = '1';
	      bin += '0';
	    }
	  else if(incr_done == 0)
	    {
	      bin[i] = '0';
	    }
	}
      else
    {
	  error = error + 1;
	}
	
    }
  if (error != 0)
    {
      cout << "\nPlease Enter The Valid Binary Number!\nNumber Of Error = " <<error << endl;
    }
  else
    {
      cout << "The Binary Increment for Given Binary Number is : " << bin << endl;
    }
}

int
main ()
{
  string bin;
  cin >> bin;
  cout << "The Given Binary Number is : " << bin << endl;
  bin_incr (bin);
}
