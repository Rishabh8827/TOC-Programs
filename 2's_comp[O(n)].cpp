#include <iostream>
using namespace std;
int main()
{
	string bin;
	cin>>bin;
  int size = bin.size();
  cout<<"The Given Binary Number = "<<bin<<endl;
  cout<<"\nsize of bin is : "<<size;
  cout<<"\nConverting To 2's Complement.";
	int error = 0;
	int find_one = 0;
	for(int i = size-1; i >= 0;i--){
		if(bin[i] == '1' && find_one == 0){
			find_one = 1;
		}else if(find_one == 1){
			if(bin[i] == '0'){
				bin[i] = '1';
			}else if(bin[i] == '1'){
				bin[i] = '0';
			}
		}
		if(bin[i] == '1' || bin[i] == '0'){
      cout<<".";
		}else{
      error = error + 1;
		}
		
	}
	cout<<endl;
	if(error != 0){
	  cout<<"Please Enter A Valid Binary Number!"<<endl;
	  cout<<"Number Of Errors -: "<<error<<endl;
	}else{
  	cout<<"The 2's Complement of Binary is = "<<bin;
  	
	}
}

//Output
/*
Find two's complement of a binary value:
----------------------------------------------
 Input binary Number = 010100....
 let:-
 The original binary = 111011
 After twos complement = 000101
*/