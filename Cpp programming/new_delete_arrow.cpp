#include<iostream>
using namespace std;
class A {
    int a,b;
    public:
    void set(int a,int c){
        (*this).a=a;//this->a=a;
        b=c;
    }
    void get(){
        cout<<"value of a"<<a<<endl;
        cout<<"value of b"<<b<<endl;
    }
};
int main(){
    int n=3;
    A *p=new A[n];
    //int *p=new [3]
    //char *p=new[4]
    //int *p=new(42)
    A *a=p;//pointer of pointer 
    int z,x;
   // delete[]p;
    for (int i = 0; i < n; i++)
    {
        cout<<"enter "<<i+1<<"value "<<endl;
        cin>>z>>x;
        p->set(z,x);
        p++;
    }
    
    for (int  j = 0; j < n; j++)
    {
        a->get();
        a++;
    }
    
    
    return 0;
}