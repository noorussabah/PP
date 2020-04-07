#include<iostream>
using namespace std;

int main()
{
	string str;
	cout<<"Enter a string: ";
	getline (cin, str);
	cout<<str;
	int i=0, len=0;
	while(str[i]!=0)
	{
		len++;
		i++;
	}
	cout<<endl<<"length of string is: "<<len;
}
