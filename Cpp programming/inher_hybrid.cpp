#include <iostream>
using namespace std;
//it is mix of hierarchical and multiple inheritence
class setdate
{
public:
    void dis()
    {
        cout << "hsn snfnjxnlkdoids " << endl;
    }
};
//the virtual is solve the problem of ambiguity
//in hybrid inheritance
class setdata1 :virtual public setdate
{
public:
    void dis1()
    {
        cout << " derivated 2" << endl;
    }
};
class setdata2 :virtual public setdate
{
public:
    void dis2()
    {
        cout << " derivated 3 " << endl;
    }
};
class setdata :  public setdata1, public setdata2
{
public:
    void dis3()
    {
        cout << " derivated 4" << endl;
    }
};

int main()
{
    setdata a;
    a.dis();
    a.dis1();
    a.dis2();
    a.dis3();
    return 0;
}