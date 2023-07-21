#include <iostream>
using namespace std;
// struct emp
// {
//     int code;
//     float salary;
// };

// typedef struct emp
// {
//     int code;
//     float salary;
// } e;

// void get(e a)
// {
//     cout << a.code << endl
//          << a.salary << endl;
// }

//other
// e get(e a)
// {
//     cout << a.code << endl
//          << a.salary << endl;
// }

// union emp
// {
//     int code;
//     float salary;
// };

int main()
{
    // enum a{a,b,c};
    // it is give value to variable 0,1,2,3,...
    // a=0   b=1   c=2
    // cout<<a<<endl<<b<<endl<<c;
    
    //emp a;
    //a.code=12;
    //a.salary=23;
    //cout<<a.code<<endl<<a.salary<<endl;

    //struct array
    // emp a[2];
    // a[0].code=12;
    // a[0].salary=23;
    // a[1].code=133422;
    // a[1].salary=22343;
    // cout<<a[0].code<<endl<<a[0].salary<<endl;
    // cout<<a[1].code<<endl<<a[1].salary;

    //struct pointer
    // e a;
    // e *p;
    // p = &a;
    // (*p).code = 12;
    // (*p).salary = 23;
    // cout << p->code << endl
    //      << p->salary << endl;

    //struct pointer to pointer
    // e a[2];
    // e *p;
    // p = a;
    // e *P;
    // P = p;
    // for (int i = 0; i < 2; i++)
    // {
    //     cin >> p->code >> p->salary;
    //     p++;
    // }
    // for (int i = 0; i < 2; i++)
    // {
    //     cout << P->code << endl
    //          << P->salary;
    //     P++;
    // }

    //function in struct 
    // emp a;
    // a.code = 12;
    // a.salary = 23;
    // get(a);

//     emp a;
//     //union are get one time one variable set
//     a.code = 12;
//     cout<<a.code<<endl;
//     a.salary=2332;
//    // cout<<a.code//it is give error
//    cout<<a.salary;
    return 0;
}