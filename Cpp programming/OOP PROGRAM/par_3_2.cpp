#include<iostream>
using namespace std;
class geometry
{
int l,b; 
public:
int area(int x)
{
l=b=x; 
return(l*b);
 } 
 int area(int x, int y)
{
l=x; 
b=y;
return(l*b);
}
int volume(int x)
{
l=x; 
return(l*l*l);
}
};
int  main()
{
geometry g;
cout<<"\nArea of square= "<<g.area(10); 
cout<<"\nArea of rectangle= "<<g.area(10,15);
cout<<"\nVolume of cube= "<<g.volume(6); 
return 0;
} 