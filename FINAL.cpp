#include<iostream>
#include<fstream>
#include <math.h>

using namespace std;

int main()
{
	string final="";
	
	int filled_rows=0;
	int selected_row;
	
	string course[100];
	int vacant[100]={};
	int admitted[100]={};
	int total[100]={};
	int no_of_institutes_offering_the_course[100]={};
	int s1=0;
	int s2=0;
	int s3=0;
	int s4=0;
	char ch;
	int total_total=0;
	int total_admitted=0;
	int total_vacant=0;
	ifstream file;
	string course_str="";
	string vacant_str="";
	string admitted_str="";
	string total_str="";
	
	string find;
	string course_temp;
	
	file.open("list - courses.txt");
	file.seekg(0);
	while(file)
	{
	file.get(ch);
	if(file.eof()==1)
	{
		break;
	}
	course_str+=ch;
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
	vacant_str+=ch;
	}
	file.close();

	file.open("list - admitted seats.txt");
	file.seekg(0);
	while(file)
	{
	file.get(ch);
	if(file.eof()==1)
	{
		break;
	}
	admitted_str+=ch;
	}
	file.close();
	
	file.open("list - total seats.txt");
	file.seekg(0);
	while(file)
	{
	file.get(ch);
	if(file.eof()==1)
	{
		break;
	}
	total_str+=ch;
	}
	file.close();

	for(int i=0;i<course_str.length();i++)
	{
		if(course_str[i]=='\n')
		{
			s1++;
		}
	}
		for(int i=0;i<vacant_str.length();i++)
	{
		if(vacant_str[i]=='\n')
		{
			s2++;
		}
	}
	for(int i=0;i<admitted_str.length();i++)
	{
		if(admitted_str[i]=='\n')
		{
			s3++;
		}
	}
		for(int i=0;i<total_str.length();i++)
	{
		if(total_str[i]=='\n')
		{
			s4++;
		}
	}
	if (s1==s2&&s1==s3&&s1==s4)
	{
		int i1=0;
		int i2=0;
		int i3=0;
		int i4=0;
		int test;
		for(int i=0;i<s1;i++)
		{
			course_temp="";
			while(course_str[i1]!='\n')
			{
				course_temp+=course_str[i1];
				i1++;
			}
			i1++;
			test=0;
			for(int x=0;x<filled_rows;x++)
			{
				if(course[x]==course_temp)
				{
					selected_row=x;
					no_of_institutes_offering_the_course[x]++;
					test=1;
					break;
				}	
			}
			if(test==0)
			{
				course[filled_rows]=course_temp;
				selected_row=filled_rows;
				filled_rows++;	
				no_of_institutes_offering_the_course[selected_row]++;
			}

			
			find="";
			while(vacant_str[i2]!='\n')
			{
				find+=vacant_str[i2];
				i2++;
			}
			i2++;
			
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
			total_vacant+=num;
			vacant[selected_row]+=num;


			find="";
			while(total_str[i4]!='\n')
			{
				find+=total_str[i4];
				i4++;
			}
			i4++;
			
			len=find.length();
			num=0;
			temp=0;
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
			total_total+=num;
			total[selected_row]+=num;


			find="";
			while(admitted_str[i3]!='\n')
			{
				find+=admitted_str[i3];
				i3++;
			}
			i3++;
			
			len=find.length();
			num=0;
			temp=0;
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
			total_admitted+=num;
			admitted[selected_row]+=num;


		}
		cout<<"COURSES";
		for(int i=7;i<100;i++)
		{
			cout<<" ";
		}
		cout<<"VACANT    ";
		cout<<"ADMITTED  ";
		cout<<"TOTAL     ";
		cout<<"NO OF INST. ";
		cout<<"%VACANT   \n";
		
		
		for(int i=0;i<150;i++)
		{
			cout<<"=";
		}
		cout<<"\n";
		for(int i=0;i<filled_rows;i++)
		{
			cout<<course[i];
			for(int j=0;j<(100-course[i].length());j++)
			{
				if(j%3==0)
				{
					cout<<"-";
				}else{
					cout<<" ";
				}
			}
			cout<<vacant[i];
			int length=1;
			for(int j=1;j<6;j++)
			{
				if(vacant[i]>=pow(10,j))
				{
					length++;
				}else{
					break;
				}
			}
			for(int j=0;j<(6-length);j++)
			{
				cout<<" ";
			}
			cout<<"+   "<<admitted[i];
			length=1;
			for(int j=1;j<6;j++)
			{
				if(admitted[i]>=pow(10,j))
				{
					length++;
				}else{
					break;
				}
			}
			for(int j=0;j<(6-length);j++)
			{
				cout<<" ";
			}
			cout<<"=   "<<total[i];
			length=1;
			for(int j=1;j<6;j++)
			{
				if(total[i]>=pow(10,j))
				{
					length++;
				}else{
					break;
				}
			}
			for(int j=0;j<(10-length);j++)
			{
				cout<<" ";
			}
			cout<<no_of_institutes_offering_the_course[i];
			length=1;
				for(int j=1;j<6;j++)
			{
				if(no_of_institutes_offering_the_course[i]>=pow(10,j))
				{
					length++;
				}else{
					break;
				}
			}
			for(int j=0;j<(12-length);j++)
			{
				cout<<" ";
			}
			
			cout<<((float)vacant[i]/(float)total[i])*100<<"\n";
			
		}
		cout<<"total vacant="<<total_vacant<<"\ntotal admitted="<<total_admitted<<"\ntotal seats="<<total_total<<"\ntotal courses="<<filled_rows;
	}
}
