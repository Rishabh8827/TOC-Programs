/******************************************************************************

Name - Rishabh Patel
Branch - Computer Engineering
Roll No. - 0827CO191046

*******************************************************************************/


#include<iostream>
using namespace std;

int main()
{
    int n1 = 0,n2 = 0,n3 = 0;
    int i,strsize;
    bool done1, done2, done3;
    string a;
    string checkO;
    cout<<"\n****************************************************************************************\n";
    cout<<"\nProgram For PDA Which Accpets Strings Of (1^n)(2^n)(3^n), n >= 1\n";
    cout<<"\n****************************************************************************************\n";
    cout<<"\nEnter A String : ";
    cin>>a;
    cout<<"\n****************************************************************************************\n";
    strsize = a.size();
    for(i = 0; i < strsize; i++) 
    {
        switch(a[i]){
            case '1':{ 
                n1++;
                if(done1 != true){
                    done1 = true;
                    checkO += '1';
                }
                break;
            }
            case '2': {
                n2++;
                if(done2 != true){
                    done2 = true;
                    checkO += '2';
                }
                break;
            }
            case '3':{
                n3++;
                if(done3 != true){
                    done3 = true;
                    checkO += '3';
                }
                break;
            }
            default : break; 
        }
    }
    if(n1 == n2 && n2 == n3 && n1 != 0 && n2 != 0 && n3 != 0 && checkO == "123")
    {
        cout<<"\n****************************************************************************************\n";
        cout<<"\nYour String is Accepted.\n";
        cout<<"\n****************************************************************************************\n";
    }
    else
    {
        cout<<"\n****************************************************************************************\n";
        cout<<"\nYour String is Rejected.\n";
        cout<<"\n****************************************************************************************\n";
    }    
    return 0;
}
