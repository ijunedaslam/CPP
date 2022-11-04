#include<iostream>
using namespace std;

    bool isPrime(int n){

            for(int i=2; i<n; i++){
                int ans;
                if(n%i == 0){
                    return 0;
                }
            }
            return 1;
    }
    int main(){

        int n;
        cin>>n;

        if(isPrime(n)){
            cout<< "It's Prime Number "<<endl;
            return 0;
        }

        cout<< "Not a Prime Number "<<endl;
         return 0;
    }
