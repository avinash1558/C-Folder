#include <iostream>
using namespace std;
class internal
{
    int n;

public:
    void get()
    {
        cout << "\nEntern:";
        cin >> n;
    }
    int n_return()
    {
        return n;
    }
    void show()
    {
        cout << "\n\nInternalmarks:" << n;
    }
};
class external
{
    int m;

public:
    void get()
    {
        cout << "\nEnterm:";
        cin >> m;
    }
    int m_return()
    {
        return m;
    }
    void show()
    {
        cout << "\nM:" << m;
    }
};
class final : public internal, public external
{
    float tot;

public:
    void get()
    {
        internal::get();
        external::get();
    }
    void show()
    {
        tot = internal::n_return() + external::m_return();
        cout << "\nTotal:" << tot;
    }
};
int main()
{
    final t;
    t.get();
    t.show();
    return 0;
}
