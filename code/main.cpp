#include <iostream>
#include <string>

#include "myLib.hpp"

using namespace std;
        //   0 1 2 3 4 5 6 7 8 9
int x[10] = {1,2,3,4,5,6,7,8,9,10};

int main () {
	//x[10] = 50;
	int m = 10;
	string t = "Hello world!!! ";
	cout << t << soma(m, 5) << endl;
	//cout << count(1) << endl;
	cout << x[10] << endl;
	
	
	//ponteiros
	int a = 10;
	int * b = &a;
	int * c;
	c = b; 
	c = &a;
	*b = 3;
	cout << "b: " << b << endl;
	cout << "*b: " << *b << endl;
	cout << "a: " << a << endl;
	cout << "&a: " << &a << endl;	
	cout << "c: " << c << endl;
	cout << "*c: " << *c << endl;
}
