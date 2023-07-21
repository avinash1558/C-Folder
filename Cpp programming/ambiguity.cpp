#include<iostream>
using namespace std;
class setdata
{
public:
    int a;
    int b;
    void dis()
    {
        cout << " htdnh wdjioewl lorem2  " << endl;
    }
};
class setdata1
{
public:
    int a;
    int b;
    void dis()
    {
        cout << " htdn13xs  fcch wdjioewl lorem2  " << endl;
    }
};
//virtual means the constructer and class are run 1st compare to other class
class setdate: virtual public setdata,public setdata1
{
public:
    void dis()
    {
        setdata::dis();//ambigutity solve
        
        cout <<  " sdfs xvc  fcch wdjioewl lorem2  "  << endl;
    }
};

int main(){
    setdate a;
    a.dis();

    return 0;
}