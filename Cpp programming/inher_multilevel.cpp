#include <iostream>
using namespace std;
// visibility mode     public        private        protected
// public              public        private        protected
// private         not inherited  not inherited   not inherited
// protected       not inherited     private        protected

class setdate
{
public:
    int a;
    int b;
    setdate(int a)
    {
        cout << "i am constructer 1" << a << endl;
    }
    void set(int s, int d)
    {
        a = s;
        b = d;
    }
    void dis()
    {
        cout << a << " " << b << endl;
    }
};
// class name : visibility mode setdate
class setdata1 : public setdate
{
    public:
    int d;
    setdata1(int a) : setdate(a)
    {
        cout << "i am constructer 2" << a << endl;
    }
    void set1(int s)
    {
        d = s;
    }
    void dis1()
    {
        cout << " derivated" << d<< endl;
    }
};
class setdata2 : public setdata1
{
    public:
    int c;
    setdata2(int a) : setdata1(a)
    {
        cout << "i am constructer 3" << a << endl;
    }
    void set2(int s)
    {
    c = s;
    }
    void dis2()
    {
        cout << " derivated" << c << endl;
    }
};
int main()
{
    setdata2 a(12);//it is access all
    //setdata1 a(12);//it is access base class and himself
    //setdate a(12);//it is access only base class
    a.set(12,12);
    a.dis();
    a.set1(23);
    a.dis1();
    a.set2(34);
    a.dis2();
    
   return 0;
}