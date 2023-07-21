#include<iostream>
using namespace std;
class base
{
public:
virtual void display()
{
cout<<"\nDisplay of base class called";
}
};
class derived:public base
{
public:
void display(){
cout<<"\nDisplay of derived class called";

}
};
int main()
{
base *b;
derived d;
b= &d;
b->display();
return 0;
}
