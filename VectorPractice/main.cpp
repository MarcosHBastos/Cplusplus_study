#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	vector <int> vector1;
	vector <int> vector2;
	
	vector1.push_back(10);
	vector1.push_back(20);
	
	cout << "Values in vector1" << endl;
	cout << "vector 1 size " << vector1.size() << endl;
	cout << "value in 0 " << vector1.at(0) << endl;
	cout << "value in 1 " << vector1.at(1) << endl;
	
	vector2.push_back(100);
	vector2.push_back(200);
	
	cout << "Values in vector2" << endl;
	cout << "vector 2 size " << vector2.size() << endl;
	cout << "value in 0 " << vector2.at(0) << endl;
	cout << "value in 1 " << vector2.at(1) << endl;
	
	vector <vector<int>> vector_2d;
	
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);
	
	cout << "\nValues in 2d vector" << endl;
	cout << "value in 0:0 " << vector_2d.at(0).at(0) << endl;
	cout << "value in 0:1 " << vector_2d.at(0).at(1) << endl;
	cout << "value in 1:0 " << vector_2d.at(1).at(0) << endl;
	cout << "value in 1:1 " << vector_2d.at(1).at(1) << endl;
	
	vector1.at(0) = 1000;
	
	cout << "\nValues in 2d vector after change" << endl;
	cout << "value in 0:0 " << vector_2d.at(0).at(0) << endl;
	cout << "value in 0:1 " << vector_2d.at(0).at(1) << endl;
	cout << "value in 1:0 " << vector_2d.at(1).at(0) << endl;
	cout << "value in 1:1 " << vector_2d.at(1).at(1) << endl;
	
	cout << "\nValues in vector1 after change" << endl;
	cout << "value in 0 " << vector1.at(0) << endl;
	cout << "value in 1 " << vector1.at(1) << endl;
}
