//Write a method to replace all spaces with %20
#include <iostream>
using namespace std;

int main()
{
	//get input
	string input;
	cout<<"Please input your string: ";
	getline(cin,input);

	//goes until there are no more spaces
	while(input.find(" ")<input.length())
	{
		//checks to see if the final char is a space. If its a space it erases it.
		while(input.find_last_of(" ")!=input.length()-1) input.erase(input.find_last_of(" ")); 
		int spaceLoc= input.find(" ");
		//replaces the spaces in the middle with the chars %20 using replace. (location of replace, how many chars to replace, what you want to replace, how long the replace is)
		input.replace(spaceLoc,1,"%20",3);
	}
	cout<< "The new string is: "<<input<<endl;
}