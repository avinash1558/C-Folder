#include <iostream>
using namespace std;
class Number
{
private:
    int num;

public:
    void getNumber()
    {
        cout << "\n\nEnter an integer number: ";
        cin >> num;
    }
    int returnNumber(){
        return num;
    }
};

class Square : public Number
{
public:
    int getSquare()
    {
        int num1, sqr;
        num1 = returnNumber();
        sqr = num1 * num1;
        return sqr;
    }
};

class Cube : public Number
{
public:
    int getCube()
    {
        int num2, cube;
        num2 = returnNumber();
        cube = num2 * num2 * num2;
        return cube;
    }
};

int main()
{
    Square objS;
    Cube objC;
    int sqr, cube;

    objS.getNumber();
    sqr = objS.getSquare();
    cout << "Square of " << objS.returnNumber() << " is: " << sqr << endl;

    objC.getNumber();
    cube = objC.getCube();
    cout << "Cube   of " << objC.returnNumber() << " is: " << cube << endl;

}