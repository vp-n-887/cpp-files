#include<iostream>
using namespace std;

class A{
     int x;
        public:
           A(int a=0):x(a){cout<<"side constructor called";}
           void show(){cout<<x;}
};

