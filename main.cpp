//Authors:Charlie Kline
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
    string firstname;
    string lastname;
    int lucky;
  //get user input
    cout<<"Whats your first name?"<<endl;
    cin>>firstname;
    cout<<"Whats your last name?"<<endl;
    cin>>lastname;
  //tell fortune
    cout<<"Welcome, "<<firstname[0]<<lastname[0]<<", here is your fortune... "<<endl;
    cout<<"The variable has "<<firstname.length()<<" letters."<<endl;
    cout<<"Your lucky number is "<<firstname.length()<<endl;
  return 0; 
}
