#include<iostream>
#include<cmath>
using namespace std;
    //public:
//};
int main(){
    float num1 ,num2;
    char op;

    cout<<"Enter first number :"<<endl;
    cin>>num1;
    cout<<"Enter oprater :"<<endl;
    cin>>op;
    cout<<"Enter second number :"<<endl;
    cin>>num2;


        switch(op)
        {
        case '+':
        cout<<"result:"<<num1+num2;
        break;
        case '-':
        cout<<"result:"<<num1-num2;
        break;
        case '*': 
        cout<<"result:"<<num1*num2;
        break;
        case '/':
        cout<<"result:"<<num1/num2;
        break;
        case 'p':
        cout<<"result:"<<pow(num1,num2);
        break;
        case 'c':
        cout<<"result:"<<cos(num1)<<"and"<<cos(num2);
        break;
        case 's':
        cout<<"result:"<<sin(num1)<<"and"<<sin(num2);
        break;
        case 't':
        cout<<"result:"<<tan(num1)<<"and"<<tan(num2);
        break;
        case 'q': 
        cout<<"result:"<<sqrt(num1)<<"and"<<sqrt(num2);
        break;
        default:
        cout<<"you enter wrong oprater";
        }
    return 0;
}