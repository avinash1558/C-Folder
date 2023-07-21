#include <iostream>
using namespace std;
class abc
{
    int a, b, c;

public:
    void get()
    {
        cout << "\nEnter three numbers:";
         cin >> a >> b >> c;
    }
    void show()
    {
        cout << "\n\nA= " << a << "\tB= " << b << "\tC= " << c;
    }
    void operator-()
    {
        a = -a;
        b = -b;
        c = -c;
    }
};

int main()
{
    abc al;
    al.get();
    cout << "\n\n Original contents";
    al.show();
    -al;
    cout << "\n\n After Negation";
    al.show();
    return 0;
}
