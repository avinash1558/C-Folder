#include<iostream>
using namespace std;
class distance2;
class distance1
{
int feet;
int inch; 
public: 
void getData()
{
cout<<"\nEnter feet: "; 
cin>>feet; 
cout<<"\nEnter inches: "; 
cin>>inch;
}
void showData()
{
cout<< feet <<"'-"<<inch<<"\"";
}
friend void sum(distance1, distance2);
};
class distance2
{
int feet,inch;
public:
void getData()
{
cout<<"\nEnter feet: "; 
cin>>feet; 
cout<<"\nEnter inches: "; 
cin>>inch;
}
void showData()
{
cout<< feet<<"'-"<<inch <<"\"" ;
}
friend void sum(distance1, distance2);
};
void sum(distance1 d1, distance2 d2)
{
int f=d1.feet+d2.feet; 
int i=d1.inch+d2.inch;
if(i>=12)
{
i=i-12;  f++;
}
cout<< f<<"'-"<<i <<"\"" ;
}
int main()
{

distance1 obj1; 
distance2 obj2;
cout<<"\nEnter Data for 1st Distance \n"; 
cout<<"";
obj1.getData();
cout<<"\nEnter Data for 2nd Distance \n"; 
cout<<""; 
obj2.getData();
cout<<"\nDistance1: "; 
obj1.showData();
cout<<"\nDistance2: "; 
obj2.showData();
cout<<"\nDistance3: "; 
sum(obj1,obj2);
return 0;
} 
