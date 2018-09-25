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
    cout<<" "<<word[0]<<".";
    word = last; 
    cout<<word[0]<<".";
    cout<<", here is your fortune..."<<endl;
    
    lucky = first.length();
    cout<<"your lucky number is "<<first.length()<<endl;
    
    word = first;
    if (word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u')
    {
    cout<<"you are destined to be famous!"<<endl;
    }
    else 
    {
    cout<<"you should keep a low profile."<<endl;
    }

    word = last;
    int number = word.length()-1;
    if (word[number] == 'a' || word[number] == 'e' || word[number] == 'i' || word[number] == 'o' || word[number] == 'u')
    {
    cout<<"you have already met your true love."<<endl;
    }
    cout<<"have a good day!"<<endl;
  return 0;
}
