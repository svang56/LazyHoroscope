//Authors:Sunny Vang
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
    string first, last;
    string lucky;
  //get user input
  cout<< "Please enter your first and then last name."<<endl;
    cin>>first;
    cin>>last;
  cout<<"Welcome, "<<first[0]<<"."<<last[0]<<"., here is your fortune..."<<endl;   
  //tell fortune
  lucky = first + last;
    cout<<"Your lucky number is: "<<lucky.length()<< "."<<endl;
  return 0;
}
