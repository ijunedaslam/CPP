#include<iostream>
using namespace std;

         int fibo(int n){
               int a=0;
               int b=1;
               int f=0;
              // cout<<a<<  " "<<b<< " ";

               for(int i=2;i<=n;i++){

                    if(i==n){
                        return f;
                    }
                 f=a+b;
                 a=b;
                 b=f;
                // cout<<f<< " ";
               }
            return 0;
          }
          int main(){

                int n;
                cin>>n;

                cout<<fibo(n);
                return 0;
          }


