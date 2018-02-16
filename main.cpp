//Authors: Lucas Eastburn
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
string first;
string last;
int luck;
int love;
  //get user input
cout<<"What is your first name?"<<endl;
cin>>first;
cout<<"What is your last name?"<<endl;
cin>>last;
cout<<"Welcome, "<<first[0]<<"."<<last[0]<<"., here is your fortune..."<<endl;

  //tell fortune
luck=first.length();
love=last.length()-1;
cout<<"your lucky number is "<<luck<<endl;

if(first[0]='A'||'a'||'E'||'e'||'I'||'i'||'O'||'o'||'U'||'u'){
cout<<"you are destined to be famous!"<<endl;

}else{
cout<<"you should keep a low profile."<<endl;
}

if(last[love]='A'||'a'||'E'||'e'||'I'||'i'||'O'||'o'||'U'||'u'){
cout<<"you have already met your true love."<<endl;
}

cout<<"have a good day!"<<endl;



return 0;
}
