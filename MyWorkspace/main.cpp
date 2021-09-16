#include <iostream>

using namespace std;

int main() {
	
	long *a {nullptr};
	int *arr {new int{21}};
	
	cout << "Size of a:  " <<  a << endl;
	cout << "Size of arr: " << &arr << endl;
	delete arr;
}
