#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter a positive integer:"<<endl;
    cin>>num;
    for (int i = 1; i * i <= num; i++) {
        if (i * i == num) {
            cout<<num<<"The no. is a perfect square."<<endl;
            return 0;
        }
    }
    cout<<num<<"The no. is not a perfect square."<<endl;
    return 0;
}