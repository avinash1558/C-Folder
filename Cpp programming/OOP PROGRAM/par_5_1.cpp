#include <iostream>
using namespace std;
class base
{
    int n;

public:
    void get()
    {
        cout << "\nEnter value for n:";
        cin >> n;
    }
    void show()
    {
        cout << "\n\t\tN=" << n;
    }
};
class derived : public base
{
    int b;

public:
    void get()
    {
        base::get();
        cout << "\nEnter value for b:";
        cin >> b;
    }
};
int main()
{
    derived d1;
    d1.get();
    d1.show();
    return 0;
}
