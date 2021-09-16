#include <iostream>

using namespace std;

int main() {
	
	//1 real 100 centavos
	//25 centavos
	//10 centavos
	//5 centavos
	//1 centavos
	
	int valor {0};
	cout << "Entre com um valor em centavos: ";
	cin >> valor;
	
	int real {0}, cq {0}, vc {0}, d{0}, cn{0}, um{0};
	
	real = valor / 100;
	valor %= 100;
	cq = valor / 50;
	valor %= 50;
	vc = valor / 25;
	valor %= 25;
	d = valor / 10;
	valor %= 10;
	cn = valor / 5;
	valor %= 5;
	um = valor;
	
	cout << "Você pode dar o troco da seguinte forma:" << endl;
	cout << "1 real:     \t" << real << endl;
	cout << "50 centavos:\t" << cq << endl;
	cout << "25 centavos:\t" << vc << endl;
	cout << "10 centavos:\t" << d << endl;
	cout << "5 centavos:\t" << cn << endl;
	cout << "1 centavo:\t" << um << endl;
	
	return 0;
}
