#include<iostream>
using namespace std;
int main(){
    int x=20;
    int &y=x;//in this &y(address of y) have value of x
    cout<<"the value of x"<<x<<endl;
    cout<<"the value of x"<<y<<endl;

    return 0;
}