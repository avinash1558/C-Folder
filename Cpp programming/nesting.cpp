#include <iostream>
#include <cstring>
using namespace std;

class binary
{
private:
    string b1, b2;

public:
    void Check()
    {
        int x = 0, y = 0, c = 0;
        for (int i = 0; i < b1.length(); i++)
        {
            if (!(b1[i] == '1') && !(b1[i] == '0'))
            {
                cout << "1st is not binary number" << endl;
                x = x + 1;
                break;
            }
        }
        if (x == 0)
        {
            cout << "1st is  binary number" << endl;
            c = c + 1;
        }

        for (int i = 0; i < b2.length(); i++)
        {
            if (!(b2[i] == '1') && !(b2[i] == '0'))
            {
                cout << "2nd is not binary number" << endl;
                y = y + 1;
                break;
            }
        }
        if (y == 0)
        {
            cout << "2nd is  binary number" << endl;
            c = c + 1;
        }
        if (c == 2)
        {
            string s;
            complement();
            add();
        }
    }
    void SetDate(string a, string b)
    {
        b1 = a;
        b2 = b;
        Check();
    }
    void complement()
    {
        string com1, com2;
        for (int j = 0; j < b1.length(); j++)
        {
            if (b1[j] == '1')
            {
                com1[j] = '0';
            }
            else
            {
                com1[j] = '1';
            }
        }
        for (int j = 0; j < b2.length(); j++)
        {
            if (b2[j] == '1')
            {
                com2[j] = '0';
            }
            else
            {
                com2[j] = '1';
            }
        }
        cout << "complement of 1st binary number : ";
        for (int j = 0; j < b1.length(); j++)
        {
            cout << com1[j];
        }
        cout << endl;
        cout << "complement of 2nd binary number : ";
        for (int j = 0; j < b1.length(); j++)
        {
            cout << com2[j];
        }
    }
    void add()
    {
        int a, s = 0, n, m;
        string d;
        string temp1,temp2;
        n = b1.length() / 2;
        m = b2.length() / 2;
        for (int i = 0; i < n; i++)
        {
            temp1[i]=b1[i];
            b1[i] = b1[b1.length() - i];
            b1[b1.length() - i]=temp1[i];
        }
        for (int i = 0; i < m; i++)
        {
            temp2[i]=b2[i];
            b2[i] = b2[b2.length() - i];
            b2[b2.length() - i]=temp2[i];
        }

        a = (b1.length() <= b2.length()) ? b2.length() : b1.length();
        for (int s = 0; s < a; s++)
        {
            if (!(b1[s] == '1') && !(b1[s] == '0'))
            {
                b1[s] = '0';
            }
            if (!(b2[s] == '1') && !(b2[s] == '0'))
            {
                b2[s] = '0';
            }
            if (b1[s] == '1' && b2[s] == '1' && s == 1)
            {
                d[s] = '1';
                s = 0;
                if (b1[s + 1] == '1' && b2[s + 1] == '1')
                {
                    s = 1;
                }
            }

            else if (b1[s] == '1' && b2[s] == '1')
            {
                d[s] = '1';
                s = 1;
            }
            else if (b1[s] == '0' && b2[s] == '0')
            {
                d[s] = '0';
            }
            else
            {
                d[s] = '1';
            }
        }
        cout <<endl<< "addition of 1st and 2nd binary is : ";
        for (int e = 0; e < d.length(); e++)
        {
            cout << d[e];
        }
    }
};
int main()
{
    binary a;
    string c, v;
    cout << "enter 1st binary number : ";
    cin >> c;
    cout << "enter 2nd binary number : ";
    cin >> v;
    a.SetDate(c, v);
    return 0;
}