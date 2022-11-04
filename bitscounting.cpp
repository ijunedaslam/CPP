#include<iostream>
using namespace std;

      int countingBits(int n){

               int count=0;

              while(n!=0){

                    if(n&1){
                        count++;
              }
                n=n>>1;
        }
      return count;


}
      int main(){

           int a,b;

           cin>>a>>b;

           cout<<"total number of bits is "<<countingBits(a)+countingBits(b)<<endl;
           return 0;
      }
