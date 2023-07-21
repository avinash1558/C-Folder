#include <iostream>
using namespace std;
int a = 23; //it is global variable, use any where
int main()
{
    int b = 12; //three are local variable which are use in int main only
    //not any where
    // float b=12.22;
    //char b='a';
    cout << b;
    cout << a;
    return 0;
}
//cout << a;