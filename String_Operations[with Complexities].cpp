/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void
string_to_upper(string &full_name)
{
    transform(full_name.begin(), full_name.end(), full_name.begin(), ::toupper);
}

void
string_to_lower(string &full_name)
{
    transform(full_name.begin(), full_name.end(), full_name.begin(), ::tolower);
}

void
string_to_upper_camel(string &name, string &surname)
{
    string_to_lower(name);
    string_to_lower(surname);
    name[0] = toupper(name[0]);
    surname[0] = toupper(surname[0]);
}

void
string_to_lower_camel(string &name, string &surname)
{
    string_to_upper(name);
    string_to_upper(surname);
    name[0] = tolower(name[0]);
    surname[0] = tolower(surname[0]);
}

int
main ()
{
  string name,surname;
  cout<<"Enter Your First Name : ";
  cin>>name;
  cout<<"Enter Your Last Name : ";
  cin>>surname;
  
  string full_name = name+" "+surname;
  cout<<"Your Full Name Is => "<<full_name<<endl;
  
  string_to_upper(full_name);
  cout<<"Your Full Name In \"UPPERCASE\" => "<<full_name<<endl;
  
  string_to_lower(full_name);
  cout<<"Your Full Name In \"lowercase\" => "<<full_name<<endl;
  
  string_to_upper_camel(name,surname);
  cout<<"Your Full Name In Upper_Camel_Case => "<<name<<" "<<surname<<endl;
  
  string_to_lower_camel(name,surname);
  cout<<"Your Full Name In lOWER_cAMEL_cASE => "<<name<<" "<<surname<<endl;
}

/*
if The length of String is = n
then complexities are...
    string_to_upper => O(n);
    string_to_lower => O(n);
    
    string_to_upper_camel => ?
    string_to_lower_camel => ?
    total complexity => ?
*/
// input :-
// Enter Your First Name : Rishabh
// Enter Your Last Name : Patel

// output :-
// Your Full Name Is => Rishabh Patel
// Your Full Name In "UPPERCASE" => RISHABH PATEL
// Your Full Name In "lowercase" => rishabh patel
// Your Full Name In Upper_Camel_Case => Rishabh Patel
// Your Full Name In lOWER_cAMEL_cASE => rISHABH pATEL

