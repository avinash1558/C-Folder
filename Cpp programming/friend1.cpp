#include <iostream>
using namespace std;
class complex //it is a class
{             //it is private member it is not access by outside of class
    // int real;
    // int imaganiry;
    //other
private:
    int real;
    int imaganiry;
friend complex addComplex(complex a, complex b);//it is friend function 
//the friend function help the variable to access private memder of class
public: //it is public member it is access by outside of class
    void SetDate(int a, int b)
    {
        real = a;
        imaganiry = b;
    }
    void GetDate(void);
    
};
void complex::GetDate(void)
{ //function body of GetDate by other method
    cout << "the complex number is :"
         << real << "+i" << imaganiry << endl;
}
complex addComplex(complex a, complex b)//using friend function, the type of function is class name
    {
        complex A;//it is create becuase call the setdate function
        A.SetDate((a.real + b.real/*value*/) ,(/*value*/a.imaganiry + b.imaganiry));
        return A;//it is A dane call getdate function
    }
int main()
{
    complex a[2],c;//array in class object
    a[0].SetDate(12,13);
    a[0].GetDate();
    a[1].SetDate(18,17);
    a[1].GetDate();
    c=addComplex(a[0],a[1]);//c=a
    c.GetDate();

    return 0;
}