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
// class name : visibility mode setdate
class setdate1
{
public:
    int d;
    int c;
    setdate1(int a)
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
//multiple inheritence
class setdata : public setdate, public setdate1
{
public:
    int c;
    //pass value to base class constructer
    //in DC and BC constructer the 1st run DC constructer  
    //in two BC constructer the 1st run those BC constructer which are write 1st in visibility mode
    setdata(int a) : setdate(a), setdate1(a)
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
    setdata a(12);//it is access both base class
    return 0;
}