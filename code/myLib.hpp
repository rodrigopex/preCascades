#ifndef __TEST__
#define __TEST__

#include <iostream>

using namespace std;
//#include <string>

struct conta {
	//string nome;
	double saldo;
};

class Registro {
protected:
	int id;
public:
	static int counter;
	Registro(int id);
	~Registro();
	void setId(int newID);
	int getId();
};

class Conta: public Registro {
public:
	Conta(int id = 0, double saldo = 0);
	void print();
	double saldo;
	Conta operator+ (Conta other);
};

//typedef struct conta Conta;

int soma(int a, int b);
int count(int c);

#endif
