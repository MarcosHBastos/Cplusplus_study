#include <iostream>

using namespace std;

//int *
void apply_all(int *arr1, size_t size1, int *arr2, size_t size2);
void print(int *arr, size_t size);

int main() {
	int arr1[] {1,2,3,4,5};
	int arr2[] {10,20,30};

	apply_all(arr1, 5, arr2, 3);
	std::cout << "My Template" << std::endl;
	return 0;
}

//int *
void apply_all(int *arr1, size_t size1, int *arr2, size_t size2) {
	
	int *result {nullptr}; 
	result = new int[size1 * size2];
	int *iterable {result};
	
	for(size_t i {0} ; i < size2 ; ++i) {
		int vA = *(arr2 + i);
		for(size_t j {0} ; j < size1 ; ++j, iterable++) {
			int vB = *(arr1 + j);
			*iterable = vA * vB;
		}
	}
	
	print(arr1, size1);
	print(arr2, size2);
	print(result, size1 * size2);
	delete [] result;
	//return result;
}

void print(int *arr1, size_t size) {
	
	cout << "Result: [";
	for(size_t i{0} ; i < size ; ++i) {
		cout << " " << arr1[i];
	}
	cout << " ]" << endl;
	
}