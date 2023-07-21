#include<iostream>
#include<string.h>
using namespace std;
class strings
{
	char str[100];
	public:
	void input();
	void output();
	strings operator+(string s);
};
void strings::input()
{
	cout<<"\nenter the string :\t\t";
	cin>>str;
}
strings strings::operator+(string s)
{
	strings temp;
	strcpy(temp.str,str);
	strcat(temp.str,s.str);
	return temp;
}
void strings::output()
{
	cout<<"\nthe string is:\t\t";
	cout<<"\t"<<str;
}
int main()
{
	strings s1,s2,s3;
	s1.input();
	s2.input();
//	s3=s1+s2;
	s3.output();
    return 0;
}