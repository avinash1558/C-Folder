#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
string str="Hello,Its going to reverse";
reverse(str.begin(),str.end());
cout<<str;
string s1="Sanjeela";
string s2="Sagar";
if(s1<s2)
cout<<endl<<s1<<"comes before"<<s2;
else
cout<<endl<<s2<<"comes before"<<s1;
return 0;
}
