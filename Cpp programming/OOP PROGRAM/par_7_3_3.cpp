#include<iostream>
using namespace std;
int main()
{
char c[]="Sanjeela Sagar";
cout.write(c,13).put('\n');//put('\n')isusedinplaceofendl
char ch[]="A";
cout<<"ch=";
cout.write(ch,1)<<endl;//writesonebyteofch.
char s[]="ABCDEFGHIJC";
cout.write(s,5)<<endl;//writes5bytesfromstrings
char name[15];
cout<<"Enter a name:";
cin.read(name,15);//reads15bytesfromname
cout.write(name,15)<<endl;//writes15bytesfromName
return 0;
}
