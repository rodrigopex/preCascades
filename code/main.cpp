#include <iostream>
#include <string>

#include "myLib.hpp"

using namespace std;
        //   0 1 2 3 4 5 6 7 8 9
int x[10] = {1,2,3,4,5,6,7,8,9,10};

/*void change(Obj * t) {
	t.change();
}*/

int main () {
	//x[10] = 50;
	int m = 10;
	string t = "Hello world!!! ";
	cout << t << soma(m, 5) << endl;
	//cout << count(1) << endl;
	cout << x[10] << endl;
	
	{
		float vector[10][10][10]; // Pilha!
	}
	// vector? n existe!

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

	{	
		//Alocação dinâmica
		int * i = 0;
		i = new int[1000]; // heap!
		*i = 100;
		cout << i << " " << *i << endl;
		delete [] i;
	}
	//i? n sabe!  100 ainda na memoria! Cuidado!
	struct conta * banco = 0;
	banco = new struct conta[1000];
	banco[0].saldo = 100.50;
	banco[100].saldo = 30;
	cout << banco[0].saldo << endl;

	Conta test; // pilha
	test.setId(3456);
	test.saldo = 1000.00;
	test.print();
	
	Conta test2(1234, -38.97); //pilha
	test2.print();
	
	Conta * test3 = new Conta;
	test3->print();
	
	Conta * test4 = new Conta(6789.0, 100);
	test4->print();
	
	Conta test5 = test2 - *test4;
	test5.print();
}
