#include<iostream>
using namespace std;
int main(){
       int n;
       cout<< "Enter the amount "<<endl;
       cin>>n;

       int a=0;


       switch(1){

              case 1: a = n/100;
                     cout<< "Number of 100 Rupees notes is "<<a<<endl;
                     n=n%100;

              case 2: a = n/50;
                      cout<< "Number of 50 Rupees notes is "<<a<<endl;
                      n=n%50;

              case 3: a = n/20;
                      cout<< "Number of 20 Rupees notes is "<<a<<endl;
                      n=n%20;

              case 4: a = n/1;
                      cout<< "Number of 1 Rupees notes is "<<a<<endl;

       }
 }
