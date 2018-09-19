//Authors: Sam Loose
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string first;
    string last;
    int lucky;
    
    cout <<"What is your first name?"<<endl;
    cin >> first;
    cout <<"What is your last name?"<<endl;
    cin >> last;
   
    cout <<"Welcome,";
    string word = first;
    cout<<word[0];
    word = last; 
    cout<<word[0];
    cout<<", here is your fortune..."<<endl;
    
    lucky = first.length();
    cout<<"Your lucky number is "<<first.length()<<" letters"<<endl;
    
  return 0;
}
