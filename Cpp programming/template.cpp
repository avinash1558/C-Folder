#include <iostream>
using namespace std;
// template <class T>//it is template
//template <class T1, class T2>//it is parameter template
//template <class T1, class T2=int>//it is defauit template
// class setdata
// {
// public:
//     T1 a;
//     T2 b;
//     void set1(T1 s, T2 d)
//     {
//         a = s;
//         b = d;
//     }
//     void dis()
//     {
//         cout << a << " " << b << endl;
//     }
// };

void set1(int a, int b)
{
    int s, d;
    s = a;
    d = b;
    cout << s << "   " << d <<"it is overloding of function"<< endl;
}
template <class T>
void set1(T a, T b)
{
    T s, d;
    s = a;
    d = b;
    cout << s << "   " << d << endl;
}
int main()
{
    // setdata <int> a;
    // a.set1(122,1221);
    // a.dis();
    // setdata <char> a1;
    // a1.set1('a','a');
    // a1.dis();

    // setdata<int,float> a;
    // a.set1(122,12.21);
    // a.dis();
    // setdata<char,float> a1;
    // a1.set1('s',12.21);
    // a1.dis();

    // setdata<int,float> a;
    // a.set1(122,12.21);
    // a.dis();
    // setdata<char> a1;
    // a1.set1('s',12.21);
    // a1.dis();

    set1(12, 12);//it is call those function which are match

    return 0;
}