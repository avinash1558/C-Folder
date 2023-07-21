#include <iostream>
// https://www.research.net/r/VBVV6C6?o=win32&v=1.55.2&m=efb58dee95236d8ac9d8f2b5651ed8911bbf1d1840bc779bba2b40b343176a39
using namespace std;
class A
{
public:
    int a, b;
    A()
    {
    }
    A(int c, int d)
    {
        a = c;
        b = d;
    }
    
    virtual void display()=0;//pure virtual function
    
    // virtual void display// virtual function
    // {
    //     cout << "the value of a" << a << endl;
    //     cout << "the value of b" << b << endl;
    // }
};

class B : public A
{
public:
    int z, x, y;
    B(int h, int i, int j) : A(h, i)
    {
        z = h;
        x = i;
        y = j;
    }
    void display()
    {
        cout << "the value of z" << z << endl;
        cout << "the value of x" << x << endl;
        cout << "the value of y" << y << endl;
    }
};
class C : public A
{
public:
    int c, v, b;
    C(int h, int i, int j) : A(h, i)
    {
        c = h;
        v = i;
        b = j;
    }
    void display()
    {
        cout << "the value of z" << c << endl;
        cout << "the value of x" << v << endl;
        cout << "the value of y" << b << endl;
    }
};
int main()
{
    A *p[2];
    B b(12, 12, 33);
    C c(12, 12, 33);
    p[0] = &b;
    p[0]->display();
    p[1] = &c;
    p[1]->display();

    return 0;
}