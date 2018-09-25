//Authors:Charlie Kline
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
    string firstname;
    string lastname;
  //get user input
    cout<<"What is your first name?"<<endl;
    cin>>firstname;
    cout<<"What is your last name?"<<endl;
    cin>>lastname;
  //tell fortune
    cout<<"Welcome, "<<firstname[0]<<"."<<lastname[0]<<"., here is your fortune..."<<endl;
    cout<<"your lucky number is "<<firstname.length()<<endl;
    if (firstname[0] == 'A' || firstname[0] == 'a' || firstname[0] == 'E' || firstname[0] == 'e' || firstname[0] == 'I' || firstname[0] == 'i' || firstname[0] == 'O' || firstname[0] == 'o' || firstname[0] == 'U' || firstname[0] == 'u'){
        cout<<"you are destined to be famous!"<<endl;
                                                                                                                }    
    else {
        cout<<"you should keep a low profile."<<endl;    
         } 
int index = lastname.length()-1;

    if (lastname[index] == 'A' || lastname[index] == 'a' || lastname[index] == 'E' || lastname[index] == 'e' || lastname[index] == 'I' || lastname[index] == 'i' || lastname[index] == 'O' || lastname[index] == 'o' || lastname[index] == 'U' || lastname[index] == 'u'){
        cout<<"You have already met your true love"<<endl;
                                                                                                         }
    cout<<"have a good day!"<<endl;
  return 0; 
}
