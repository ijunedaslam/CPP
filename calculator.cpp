#include<iostream>
#include<math.h>

using namespace std;
int main(){

   int a,b;

   cout<<"Enter the value of a "<<endl;
   cin>>a;

   char op;
   cout<<"Enter the operation you want to perform "<<endl;
   cin>>op;

   cout<<"Enter the value of b "<<endl;
   cin>>b;

   switch(op){

          case '+' : cout<<(a+b)<<endl;
                   break;

          case '-' : cout<<(a-b)<<endl;
                   break;

          case '*' : cout<<(a*b)<<endl;
                   break;

          case '/' : cout<<(a/b)<<endl;
                   break;

          case '%' : cout<<(a%b)<<endl;
                   break;

          default: cout<< "Enter the Valid Operation "<<endl;
   }
}
