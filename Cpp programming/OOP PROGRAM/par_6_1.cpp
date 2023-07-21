#include <iostream>
using namespace std;
class employee
{
    int emp_code, age;
    char name[30], qualification[30];

public:
    void get()
    {
        cout << "\nEnteremployeeid:";
        cin >>emp_code;
        cout << "\nEnteremployeename:";
        cin >> name;
        cout << "\nEnteremployeeage:";
        cin >> age;
        cout << "\nEnteremployeequalification:";
        cin >> qualification;
    }
    void show()
    {
        cout << "\n\nEmployeeid:" << emp_code;
        cout << "\tName:" << name;
        cout << "\nAge:" << age << "\t\tQualification:" << qualification;
    }
};

class contract_employee : public employee
{
    int contract_id;

public:
    void get()
    {
        cout << "\nEntercontract_id:";
         cin >>contract_id;
    }
    void show()
    {
        cout << "\nContractID:" << contract_id;
    }
};
int main()
{
    contract_employee ce;
    ce.get();
    ce.show();
    return 0;
}
