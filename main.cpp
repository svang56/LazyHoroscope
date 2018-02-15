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
    
    if( first[0] == 'a' || first[0] == 'e' || first[0] == 'i' || first[0] == 'o' || first[0] == 'u' || first[0] == 'A' || first[0] == 'E' || first[0] == 'I' || first[0] == 'O' || first[0] == 'U')
    {
    cout<<"You are destined to be famous!"<<endl;
    }
    else
    {
    cout<<"You should keep a low profile."<<endl;
    }

    int endvow = last.length();

    if( last[endvow - 1] == 'a' || last[endvow - 1] == 'e' || last[endvow - 1] == 'i' || last[endvow - 1] == 'o' || last[endvow - 1] == 'u' || last[endvow -1] == 'A' || last[endvow - 1] == 'E' || last[endvow - 1] == 'O' || last[endvow - 1] == 'O' || last[endvow - 1] == 'U')
    { 
    cout << "You have already met your true love." <<endl;
    }
    cout << "Have a good day!"<<endl;
  return 0;
}
