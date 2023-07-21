#include <iostream>
using namespace std;
class setdate
{
public:
    int a;
    int b;
    setdate(int s)
    {
        cout << "i am constructer 1" << s << endl;
    }
    void set2(int s, int d)
    {
        a = s;
        b = d;
    }
    void dis()
    {
        cout << a << " " << b << endl;
    }
};

class setdate1:public setdate
{
public:
    int d;
    int c;
    //pass value to base class constructer 
    setdate1(int a): setdate(a)
    {
        cout << "i am constructer 2" << a << endl;
    }
    void set1(int s)
    {
        d = s;
    }
    void dis()
    {
        cout << " derivated" << d << "    " << c << endl;
    }
};
class setdata : public setdate
{
public:
    int c;
    //pass value to base class constructer 
    setdata(int a) : setdate(a)
    {
        cout << "i am constructer 3" << a << endl;
    }
    void set3(int s)
    {
        c = s;
    }
    void dis()
    {
        cout << " derivated" << c << "    " << a << "    " << b << endl;
    }
};
int main()
{
    // setdata a(12);//it is access only himself and base class
    // setdate1 a(12);//it is access only himself and base class
    // setdate a(12);//it is access only base class

    return 0;
}