//Implement a method to perform a basic string compression using counts of repeated characters. 
//For example aabcccccaaa would become a2b1c5a3
#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a string: ";
	string input="";
	getline(cin,input);
	string compressed="";
	char last=' ';
	int count=1;
	for(int x=0;x<input.length();x++)
	{
		last=input[x];
		if(last==input[x+1])
		{
			count++;
		}
		else if(last!=input[x+1])
		{
			compressed += last;
			compressed += count;
			count=1;
		}
	}
	cout<<"The compressed string is now: " << compressed<<endl;


} 