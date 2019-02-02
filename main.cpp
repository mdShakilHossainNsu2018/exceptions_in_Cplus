#include <iostream>
using namespace std;

int main() {
    try {
        int num1;
        cout<<"enter the first number: ";
        cin>>num1;
        int num2;
        cout<<"enter the second number: ";
        cin>>num2;
        if (num2==0){
            throw 0;
        }
        cout<<"result: "<<num1/num2<<endl;
    }catch (...){
        cout<<"Divided by zero"<<endl;
    }

    return 0;
}