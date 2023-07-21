#include<iostream>
using namespace std;
class base
{
int n;
public:
void get()
{
cout<<"\nEntervalueforn:";
cin>>n;
}
void show()
{
cout<<"\n\t\tN="<<n;
}
};
class derived:private base
{
int b;
public:
void get()
{
base::get();
          cout<<"\nEntervalueforb:";
          cin>>b;
}
void display()
{
show();
}
};
int main()
{
derived d1;
d1.get();

d1.display();
return 0;
}
