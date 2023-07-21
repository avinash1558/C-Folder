#include<iostream>
using namespace std;
//int sum(int a,int b,int c=0);//function prototype
//return type  function name (peramiter)
//other 
// int sum(int a,int b){//function description
//   return a+b;//function body
// }

// void swap(int *a,int *b){
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
// }
// void swap(int &a,int &b){
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
// }

//recurtion 
// int fab(int n){
//     if(n==1||n==2){
//         return 1;
//     }
//     if(n==0){
//         return 0;
//     }
//     return fab(n-1)+fab(n-2);
//     }
//fab[1] and fab[2] =1  fibonacci sequence
int main(){
    int a=3;
    int a1;
    int b=2;
    //cout<<sum(a,b);//function call
    //it is call by value it is pass argument
    //cout<<sum(a,b);//function call


    //call by reference
    // swap(&a,&b);//it pass address of variable
    // cout<<a<<endl<<b;
    //other 
    //swap(a,b);//it pass address of variable
    //cout<<a<<endl<<b; 

    // cin>>a1;
    // cout<<fab(a1);
    

    return 0;
}
//int sum(int a,int b,int c=0){//function description
//c=0 it is defualt argument when pass value of c then
//    defualt argument are not run but  when not pass value of c then
//    defualt argument are run  
//    return a+b+c;//function body
//}