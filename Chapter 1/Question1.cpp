#include <iostream>
using namespace std;

bool isUniqueChars(string);

int main()
{
cout<<"What string would you like to check?"<<endl;
string str;
cin>> str;
cout<<"The stringe is all unique chars: " << isUniqueChars(str) <<endl;
}

bool isUniqueChars(string str)
{
if(str.size()>128) //There are only 128 potential chars 
  return false;
bool charCheck[256]={false};
for(int i=0;i<str.size();i++)
{
int val = str.at(i);
if(charCheck[val])
{
  return false;
}
  charCheck[val] = true;
}
return true;
}
