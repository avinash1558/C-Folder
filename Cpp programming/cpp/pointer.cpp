#include <iostream>
using namespace std;

int main()
{
    //pointer
    // int a=2;
    // int *p=&a;//p is a pointer
    // //p=&a;//in p it have a address of a(&a)
    // //a address is -- &a
    // //value of a is--- a,*(&a) ,*p
    // //becuase p=&a so *(&a) =*p
    // //in this *(&a) is not a pointer
    // cout<<a<<endl;//a=2
    // cout<<*p<<endl;//a=2
    // cout<<p<<endl;//address of a
    // cout<<&a<<endl;//address of a
    // cout<<&p<<endl;//address of p

    //pointer to array
    // int a[12] = {1, 1, 1, 111, 11, 2, 3, 23, 2, 3};
    // int *p; //p is a pointer
    // p = a;  //p=&a[0]; both are same
    // for (int i = 0; i < 12; i++)
    // {
    //     cout << *p << endl;
    //     p++;
    // }
    // cout << *(p + 3) << endl;

    //pointer to pointer
    // int a=112;
    // int *p; //p is a pointer
    // int **pp; //pp is a pointer
    // p = a;
    // pp = &p; //pointer to pointer  
    //     cout <<p<< endl;//address of a
    //     cout <<pp<< endl;//address of p
    //     cout <<*p<< endl;//address of a
    //     cout <<**pp<< endl;//address of a
    //     cout <<*pp<< endl;//address of p

    return 0;
}