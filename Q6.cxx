#include<iostream>
using namespace std;
int main(){
    int num;
    int factorial = 1;
    cout<<"Enter a positive integer: "<<endl;
    cin>>num;
    if (num < 0) {
        cout<<"Negative no.s doesnt have factorial."<<endl;
        return 1;
     }
    for (int i = 1; i <= num; i++) {
        factorial *= i;
     }
    cout<< "Factorial of "<< num<<" is "<< factorial<<endl;
    return 0;
 }