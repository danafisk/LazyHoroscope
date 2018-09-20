//Authors: Dana Fisk
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
string first;
string last;
  //get user input
cout<<"What is your first name?";
cin>>first;
cout<<"What is your last name?";
cin>>last;
  //tell fortune

cout<<"Welcome "<<first [0] <<"."<< last [0] <<".  here is your fortune...\n";

cout<<"Your lucky number is " <<first.length() <<".\n";


return 0;
}
