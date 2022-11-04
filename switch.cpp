#include<iostream>
using namespace std;
int main(){

    int num=1;
    char ch='A';

    switch(ch){

    case 1: cout<< "First"<<endl;
           break;

    case 'A': switch(num){
              case 1: cout<< "the value of num is "<<num <<endl;
                    break;
    }
          break;

    default: cout<< "it is Default case"<<endl;

    }
}
