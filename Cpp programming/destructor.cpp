#include<iostream>
using namespace std;
class base{
    public:
    base(){//it is default constructer
    //it is importent becuase when all constructer are not run then it is run
        cout <<"it is default constructer "<<endl;
    }
    ~base(){//it is destructor
    //it is run in last of program 
        cout <<"it is  destructor "<<endl;

    }
    
};
int main(){
    base a4;
  
    return 0;
}