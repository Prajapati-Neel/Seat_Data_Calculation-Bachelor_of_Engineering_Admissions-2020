#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int s1=0;
	int s2=0;
	char ch;
	ifstream file;
	string str1="";
	string str2="";

	file.open("list - courses.txt");
	file.seekg(0);
	while(file)
	{
	file.get(ch);
	if(file.eof()==1)
	{
		break;
	}
	str1+=ch;
	}
	file.close();
	
	file.open("list - vacant seats.txt");
	file.seekg(0);
	while(file)
	{
	file.get(ch);
	if(file.eof()==1)
	{
		break;
	}
	str2+=ch;
	}
	file.close();

	string final="";
	for(int i=0;i<str1.length();i++)
	{
		if(str1[i]=='\n')
		{
			s1++;
		}
	}
		for(int i=0;i<str2.length();i++)
	{
		if(str2[i]=='\n')
		{
			s2++;
		}
	}
		cout<<"s1="<<s1<<"  s2="<<s2;
	if (s1==s2)
	{
		int i1=0;
		int i2=0;
		int number_of_spaces=0;
		for(int i=0;i<s1;i++)
		{
			number_of_spaces=0;
			while(str1[i1]!='\n')
			{
				final+=str1[i1];
				i1++;
				number_of_spaces++;
			}
			i1++;
			for(int j=0;j<100-number_of_spaces;j++)
			{
				final+=" ";
			}
			while(str2[i2]!='\n')
			{
				final+=str2[i2];
				i2++;
			}
			i2++;
			final+='\n';
		}	
	}
	cout<<"\n"<<final;
}
