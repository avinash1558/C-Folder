#include<iostream>
using namespace std;

int main(){
    int a=22.22;// int are not store point value
    float z=203.11;// float are store point value
    cout<<"the value of a"<<a<<endl;//a=22  
    cout<<"the value of z"<<(int)z<<endl;//z=
    //in this the float are convert into int 
    cout<<"the value of z"<<z<<endl;//z=203.11
    cout<<"the size of int"<<sizeof(int)<<endl;//z=203.11
    cout<<"the size of float"<<sizeof(float)<<endl;//z=203.11
    cout<<"the size of char"<<sizeof(char)<<endl;//z=203.11
    //sizeof  are use for finding size
    return 0;
}