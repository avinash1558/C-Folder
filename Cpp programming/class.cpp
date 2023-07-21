#include <iostream>
using namespace std;
class complex//it is a class
{//it is private member it is not access by outside of class
    // int real;
    // int imaganiry;
    //other
    private:
    int real;
    int imaganiry;

public://it is public member it is access by outside of class
    void SetDate(int a, int b)
    {
        real = a;
        imaganiry = b;
    }
    void GetDate(void);
    void addComplex(complex a,complex b){
    real=a.real+b.real;
    imaganiry=a.imaganiry+b.imaganiry;
    }
};
void complex::GetDate(void){//function body of GetDate by other method
        cout << "the complex number is :" 
        << real << "+i" << imaganiry << endl;
}
int main()
{   
    // complex a;
    // complex b,c;
    // a.SetDate(12,13);
    // a.GetDate();
    // b.SetDate(18,17);
    // b.GetDate();
    complex a[2],c;//array in class object
    a[0].SetDate(12,13);
    a[0].GetDate();
    a[1].SetDate(18,17);
    a[1].GetDate();
    c.addComplex(a[0],a[1]);
    c.GetDate();
    return 0;
}