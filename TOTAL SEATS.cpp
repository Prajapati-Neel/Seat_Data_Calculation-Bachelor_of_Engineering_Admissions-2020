#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream file;
	char ch;
	string str;
	file.open("list - total seats.txt");
	file.seekg(0);
	int total=0;
	string find="";
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
	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='\n')
		{
			int len=find.length();
			int num=0;
			int temp=0;
			for(int i=1;i<=len;i++)
			{
				if(find[len-i]=='0')
				{
					temp=0;
				}else	if(find[len-i]=='1')
				{
					temp=1;
				}else
				if(find[len-i]=='2')
				{
					temp=2;
				}else
				if(find[len-i]=='3')
				{
					temp=3;
				}else
				if(find[len-i]=='4')
				{
					temp=4;
				}else
				if(find[len-i]=='5')
				{
					temp=5;
				}else
				if(find[len-i]=='6')
				{
					temp=6;
				}else
				if(find[len-i]=='7')
				{
					temp=7;
				}else
				if(find[len-i]=='8')
				{
					temp=8;
				}else
				if(find[len-i]=='9')
				{
					temp=9;
				}
			int ten=1;
			if(i>1)
			{
				for(int j=1;j<i;j++)
				{
					ten*=10;
				}	
			}
				num+=temp*ten;
			}
			total+=num;
			
			find="";
		}else
		{
			find+=str[i];
		}
	}
cout<<"Total Seats="<<total;
}
