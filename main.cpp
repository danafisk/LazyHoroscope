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
cout<<"What is your first name?\n";
cin>>first;
cout<<"What is your last name?\n";
cin>>last;
  //tell fortune

cout<<"Welcome "<<first [0] <<"."<< last [0] <<"., here is your fortune...\n";

cout<<"Your lucky number is " <<first.length() <<".\n";

if (first [0] == 'a'|| first [0] == 'A' || first [0] == 'e' || first [0] == 'E' || first [0] == 'i' || first [0] == 'I' || first [0] == 'o' || first [0] == 'O' || first [0] == 'u' || first [0] == 'U') cout<<"You are destined to be famous!\n";

else cout<<"Keep a low profile.\n";

if (last [0] == 'a'|| last [0] == 'A' || last [0] == 'e' || last  [0] == 'E' || last [0] == 'i' || last [0] == 'I' || last [0]  == 'o' || last [0] == 'O' || last [0] == 'u' || last [0] == 'U') cout<<"You have already met your true love.\n";

cout<<"Have a good day!\n";


return 0;
}
