#include<iostream>
#define p 23;//it is symblic constant
//it is use #define  
//#define p 23 it mians p=23 
using namespace std;
int main(){
    const int a=12;//const are not change 
    cout<<a<<endl;
    cout<<a+p;
    //a=13; const are not change
    return 0;
}