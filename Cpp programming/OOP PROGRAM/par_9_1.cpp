#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream fwrite("1.txt");

fwrite<<"hello\nhi hey\nworld\n";
fwrite.close();

ifstream fread("1.txt");
int w=0,l=0;
char c;
while(fread)
{
fread.get(c);
if(c==' '|| c=='\n')
w++;
if(c=='\n')
l++;
}
fread.close();
cout<<"\n Total no. of words in the file:"<<w;
cout<<"\n Total no. of lines in the file:"<<l;
return 0;
}

