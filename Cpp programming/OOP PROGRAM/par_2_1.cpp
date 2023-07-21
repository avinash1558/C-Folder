#include<iostream>
using namespace std;
class complex
{
float n,m; 
public:
void getData()
{
cout<<"\nEnter real number: "; 
cin>>n;
cout<<"\nEnter imaginary number: "; 
cin>>m;
}
void showData()
{ cout<< n <<" + i"<< m ;
}
friend complex sum(complex, complex);
};
complex sum(complex c1, complex c2)
{
complex c3; 
c3.n=c1.n+c2.n; 
c3.m=c1.m+c2.m; 
return c3;
}
int main()
{

complex obj1, obj2, obj3;
cout<<"\nEnter Data for 1st Complex Number \n"; 
cout<<"";
obj1.getData();
cout<<"\nEnter Data for 2nd Complex Number \n"; 
cout<<"";
obj2.getData();
obj3=sum(obj1,obj2); 
cout<<"\nComplex Number1: "; 
obj1.showData(); 
cout<<"\nComplex Number2: "; 
obj2.showData(); 
cout<<"\nComplex Number3: "; 
obj3.showData();
return 0;
}

