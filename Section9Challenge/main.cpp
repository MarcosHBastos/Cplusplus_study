#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

int main() {
	
	bool quit{false};
	std::vector <int> vec;
	
	do {
		cout << "\nP - Print numbers" << endl;
		cout << "A - Add numbers" << endl;
		cout << "M - Display mean of the numbers" << endl;
		cout << "S - Display the smallest number" << endl;
		cout << "L - Display the largest number" << endl;
		cout << "Q - quit" << endl;
		
		char option;
		cout << "\nEnter your choice: ";
		cin >> option;
		switch(option) {
			case 'P':
			case 'p': {
				if( vec.empty()){
					cout << "[] - the list is empty" << endl;
				} else {
					cout << "[";
					for(int num: vec) {
						cout << " " << num;
					}
					cout << " ]" << endl;
				}
			}
			break;
			case 'A':
			case 'a': {
				int add {};
				cout << "Enter an integer to add to the list: ";
				cin >> add;
				vec.push_back(add);
				cout << add << " added" << endl;
			}
			break;
			case 'M':
			case 'm': {
				if(vec.empty()) {
					cout << "Can't calculate mean, list is empty" << endl;
				} else {
					int sum {0};
					for(int num: vec) {
						sum += num;
					}
					cout << "Mean of vector values is: " << (sum / vec.size()) << endl;
				}
			}	
			break;
			case 'S':
			case 's': {
				if(vec.empty()) {
					cout << "Can't find smallest number, list is empty" << endl;
				} else {
					int min {vec.at(0)};
					for(int num: vec) {
						min = (num < min) ? num : min;
					}
					cout << "Smallest number in list is: " << min << endl;
				}
			}
			break;
			case 'L':
			case 'l': {
				if(vec.empty()) {
					cout << "Can't find largest number, list is empty" << endl;
				} else {
					int max {0};
					for(int num: vec) {
						max = (num > max) ? num : max;
					}
					cout << "Largest number in list is: " << max << endl;
				}
			}
			break;
			case 'Q':
			case 'q':
				cout << "Goodbye!" << endl;
				quit = true;
				break;
			default:
				cout << "Invalid option!" << endl; 
			break;
		}
	}while (!quit);
	
	return 0;
}
