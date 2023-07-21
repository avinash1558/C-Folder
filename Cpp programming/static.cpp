#include <iostream>
#include <cstring>
using namespace std;
class employee // it is class
{
private: //the private member function and variable are not access by outside of class
    string name;
    float salary;

protected://the protected member function and variable are not access by outside of class
    static int id; //it is static variable
    //it is store same value for all variable
public: //the public member function and variable are access by outside of class
    void set_data(string a, float b)
    {
        name = a;
        salary = b;
    }
    void display()
    {
        cout << "my name is  " << name << endl
             << name << "salary is" << salary << endl
             << "id is " << id << endl;
        id++;
    }
    static void ids()
    {   //it is static function
        //it is access only static variable not all variable like.int ,float ,char
        cout << id << endl;
    }
};
int employee::id; //dicleration of static variable
int main()
{
    employee emp; // it is class object
    string c;
    float v;
    getline(cin, c);
    cin >> v;
    emp.set_data(c, v);
    emp.display();
    emp.display();
    employee::ids();//it is static function call
    return 0;
}