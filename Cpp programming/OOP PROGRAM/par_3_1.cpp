#include<iostream>
using namespace std;
class complex
{
float n,m; 
public: 
complex()
{
n=0; 
m=0;
}
complex(int a, int b)
{
n=a; 
m=b;
}
void showData()
{
cout<< n <<" + i"<< m ;
}
complex sum(complex c1)
{
complex c3; 
c3.n=n+c1.n; 
c3.m=m+c1.m; 
return c3;
}
};
int  main()
{
complex obj1(3,4); 
complex obj2(4,5); 
complex obj3;
obj3=obj1.sum(obj2);
cout<<"\nComplex Number1: "; 
obj1.showData();
cout<<"\nComplex Number2: "; 
obj2.showData(); 
cout<<"\nComplex Number3: "; 
obj3.showData();
return 0;
}
