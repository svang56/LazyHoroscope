//Authors:Sunny Vang
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
    string first, last;
    int lucky;

  //get user input

  cout<< "Please enter your first and then last name."<<endl;
    cin>>first;
    cin>>last;
  cout<<"Welcome, "<<first[0]<<"."<<last[0]<<"., here is your fortune..."<<endl;   
  //tell fortune

  lucky = first.length();
    cout<<"Your lucky number is: "<<lucky<< "."<<endl;

  return 0;
}
