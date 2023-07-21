#include <iostream>
using namespace std;
// visibility mode     public        private        protected
// public              public        private        protected
// private         not inherited  not inherited   not inherited
// protected       not inherited     private        protected

class setdate
{
public:
    int a;
    int b;
    void set2(int s, int d)
    {
        a = s;
        b = d;
    }
    void dis()
    {
        cout << a << " " << b << endl;
    }
};
// class name : visibility mode setdate
class setdata : public setdate
{
    public:
    int d;
    void set1(int s)
    {
        d = s;
    }
    void dis()
    {
        cout << " derivated" << d<<"    "<<a<<"    "<<b << endl;
    }
};
int main()
{
    // setdate a;//it is call only base class function
    // a.set2(12,11);
    // a.dis();
    // setdata a;
    // a.set1(01,1200);
    // a.set2(21, 12);
    // a.dis();//when the base and direvate class function name are same so it is call those function which class object are create 
    
    //pointer 
    // setdate *a;
    // setdata b;
    
    // a=&b;// it is pointing the b
    // (*a).set2(12,11);//calling function by pointer 
    // a->dis();//other method to call function by pointer
    // a=&b;//it is point by dirarate class object
    // a->dis();//when the base and direvate class function name are same so it is call base class function  
    // a->set1(12);

    //array and pointer
    // setdata p[2];
    // p[0].dis();
    // p[1].dis();
    // setdata *a=new setdata[2];//it is array a[2]
    // a[0].dis();
    // setdata *a;
    // setdata p[2];
    // a=p;//it means a=&p[0]
    // int n;
    // cin>>n;
    // a->set1(n);
    // a->dis();
    // a++;
    // a->set1(23);
    // a->dis();
    // int n; 
    // for (int i = 0; i < 2; i++)
    // {
    //     cin>>n;
    //     a->set1(n);
    //     a->dis();
    //     a++;
    // }
    return 0;
}