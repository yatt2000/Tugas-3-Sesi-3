#include<iostream>
using namespace std;
int main(){
    int a,*b,**c;
    a=15;
    b=&a;
    c=&b;
    cout<<*b;
    cout<<**c;
}

