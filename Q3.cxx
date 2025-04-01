#include<iostream>
using namespace std;
int main(){
    int num,i;
    cout<<"enter a no."<<endl;
    cin>>num;
    if(num<2){
        cout<<num<<"The no. isnt a prime no."<<endl;
        return 0;
    }
 for(i=2;i<num;i++){
     if(num%i==0){
         cout<<num<<"The no. isnt a prime no."<<endl;
        return 0;
        }
        }
        cout<<num<<"The no. is a prime no."<<endl;
         return 0;
         }                                                                                                     