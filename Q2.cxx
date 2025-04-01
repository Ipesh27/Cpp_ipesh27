#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"enter the 3 sides of the triangle."<<endl;
    cin>>a >>b >>c ;
  if(a+b>c && a+c>b && b+c>a){
      cout<<"a triangle can be formed."<<endl;
      if(a==b && b==c){
          cout<<"this is an equilateral triangle."<<endl;
      }
      else if(a==b || b==c || a==c){
          cout<<"this is an isoscales trianlge."<<endl;
      }
      else{
          cout<<"this is a scalene triangle."<<endl;
  }
  }
      else{
          cout<<"a triangle cant be formmed."<<endl;
      }
      return 0;
  }