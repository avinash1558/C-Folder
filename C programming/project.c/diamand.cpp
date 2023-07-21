#include <iostream>
using namespace std;
//class  {               // n=4
//public:            //
//};                    //
//class :public  {       //
//public:            //
//};
int main()
{
    int n, c, k, s = 1;
    cin >> n;
    s = n - 1; //s=4
    for (k = 1; k <= n; k++)
    { //k=1,2,3,4,5
        for (c = 1; c <= s; c++)
        {                //run for 1,2
            cout <<"_"; //c=1   s=4     c=3  s=3
            s--;         //c=2  s=3   2//not run c=4  s=2(c<=s)
        }
        for (c = 1; c <= (2*k)-1; c++)
        { //2*k-1   2*1-1=2-1=1   k=1
            cout << "*";
            cout << "\n"; //2*k-1   2*2-1=4-1=3   k=2
                          //2*k-1   2*3-1=6-1=5   k=3
        }
    }
    return 0;
}