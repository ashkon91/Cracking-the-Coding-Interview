//Implement a fucntion void reverse(Char*str) in C++ which reverses a null-terminated string.
#include <iostream>
using namespace std;

int main()
{
char str123[] = {'T','e','s','t','e','r','\0'};
char start = ' ';
char ender = ' ';
int strlength = sizeof(str123);
cout<<"The original word is: ";
for(int a =0; a<strlength;a++) cout<<str123[a];
cout << endl;

for(int i = 0; i<(strlength/2); i++)
{
start = str123[0+i];
ender = str123[strlength-i-1];
str123[strlength-i-1] = start;
str123[i] = ender;

}
cout<<"The word is now reversed to: ";
for(int x =0; x<strlength;x++) cout<<str123[x];
cout<<endl;
}
