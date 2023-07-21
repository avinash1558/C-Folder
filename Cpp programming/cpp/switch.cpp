#include <iostream>
using namespace std;

int main()
{
    int a, b = 5;
    for (int  i = 0; i < 5; i++)
    {
        if(i==4){
            continue;//when condition is true dane go to up    
        }
        cout << i<<endl;
    }
    
    cout << "enter 1to5 ";
    cin >> a;
    cout << "\n";
    switch (a)
    {
    case 1: //it is when 1
        cout << "it is 1";
        break; //it is exit from function

    case 2: //it is when 2
        cout << "it is 2";
        break;

    case 3: //it is when 3
        cout << "it is 3";
        break;
    case 4: //it is when 4
        cout << "it is4";
        break;
    case 5: //it is when 5
        cout << "it is 5";
        break;

    default: // when all case are not run dane run default
        break;
    }

    return 0;
}