#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

int main(){
    string st,s;

    getline(cin,st);
    ofstream out;//it is use for writting
    out.open("avinash.txt");
    out<<st;//it is like cout
    //out.close();//it is use for closing file
    
    ifstream in("avinash.txt");//it is for read
    in>>s;//it is like cin
    //getline(in,s);
    cout<<s;
    
    return 0;
}