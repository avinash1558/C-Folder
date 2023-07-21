#include<iostream>
#include<cstring>
using namespace std;
class binary1 {
    public:
    char s[20];

    binary1(){
        cout<<"Enter 1st binary no. :"<<endl;
        cin>>s;
    }
    // int ret(){
    //     return s;
    // }
};
class binary2 :public binary1 {
    public:
    void dis(){
        cout<<"your 1st binary no. is :"<<s<<endl;
        for(int i=0;i<strlen(s);i++){
            if(s[i]=='0' || s[i]=='1'){
            cout<<s<<"   it is binary no. :"<<endl;
            break;
            }
            else{
            cout<<s<<"   it is not a binary no. :"<<endl;
            }
        }
    }
};
int main(){
    binary2 a;
    a.dis();

    return 0;
}