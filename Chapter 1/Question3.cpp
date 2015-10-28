//Given two strings, write a method to decide if one is a permutation of the other.
#include <iostream>
using namespace std;

bool isPerm();

int main()
{
bool result;
result=isPerm();
cout << "The result of if it is a permutation is: "<< result << endl;
}

bool isPerm()
{
//take input of two strings
cout<<"Enter the strings you want to see if they are permutations of each other!"<<endl;
cout<<"String 1: ";
string word1="";
cin>>word1;
cout<<"String 2: ";
string word2="";
cin>>word2;

int count;
if(word1.length()!=word2.length()) return false; //if lengths arent same they cant be a permutation

for(int x=0;x<word1.length();x++)
{
	count = 0;
	//check to see how many times the char exists in the first word
	for(int y=0;y<word1.length();y++)
		if(word1[x]==word1[y])	count++;
	//checks the second word for the letters in word one. Accounts for multiples decrementing count.
	for(int z=0; z<word2.length(); z++)
		if(word1[x]==word2[z]) count--;
	//if the count is not 0 then there cant be a permutation.
	if(count!=0) return false;
}
//if loop completes then it must be true

return true;
}
