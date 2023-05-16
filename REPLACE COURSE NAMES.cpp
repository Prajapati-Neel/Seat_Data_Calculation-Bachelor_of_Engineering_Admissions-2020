#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream file;
	ofstream ofile;
	char ch;
	string str;
	string to_be_replaced="COMPUTER ENGINEERING (ARTIFICIAL\nINTELLIGENCE AND MACHINE LEARNING)";// change the string
	string replacement="COMPUTER ENGINEERING (ARTIFICIAL INTELLIGENCE AND MACHINE LEARNING)";// change the string
	int found_at=1;
	int length;
	file.open("untitled.txt");
	file.seekg(0);
	while(file)
	{
	file.get(ch);
	if(file.eof()==1)
	{
		break;
	}
	str+=ch;
	}
	file.close();
	ofile.open("backup.txt");
	for(int i=0;i<str.length();i++)
	{
		ofile.put(str[i]);
	}
	ofile.close();

	while(str.find(to_be_replaced,found_at+length+1)!=18446744073709551615)
	{
		found_at=str.find(to_be_replaced,found_at+length+1);
		length=to_be_replaced.length();
		str.replace(found_at,to_be_replaced.length(),replacement);
		cout<<"executing";
	}
	ofile.open("untitled.txt");
	for(int i=0;i<str.length();i++)
	{
		ofile.put(str[i]);
	}
	ofile.close();
	
}
