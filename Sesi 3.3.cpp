#include <iostream>
using namespace std;

int xy(int *x){
	int z;
	z = *x + 80;
}
int main (){
	int x= 40;
	cout<<"nilai x : "<<x<<endl;
	cout<<"nilai z : "; 
	cout<< xy (&x);
	return 0;
}

