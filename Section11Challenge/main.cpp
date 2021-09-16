#include <iostream>
#include <vector>
#include <string>

using namespace std;

char make_upper(char c); 
void print_vector(vector<int> &vec);
void add_value(vector<int> &vec);
double calculate_mean(vector<int> &vec);
int find_min(vector<int> &vec);
int find_max(vector<int> &vec);

int main() {
	
	bool quit{false};
	vector <int> vec;
	
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
		switch(make_upper(option)) {
			case 'P': {
				print_vector(vec);
			}
			break;
			case 'A': {
				add_value(vec);
			}
			break;
			case 'M': {
				double mean {calculate_mean(vec)};
				if(mean != NULL) {
					cout << "Mean of vector values is: " << mean << endl;
				}
			}	
			break;
			case 'S': {
				int min {find_min(vec)};
				if(min != NULL) {
					cout << "Smallest number in list is: " << min << endl;
				}
			}
			break;
			case 'L': {
				int max {find_max(vec)};
				if(max != NULL) {
					cout << "Largest number in list is: " << max << endl;
				}
			}
			break;
			case 'Q':
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

char make_upper(char c) {
	string lower_alphabet {"abcdefghijklmnopqrstuvwxyz"};
	if(lower_alphabet.find(c) != string::npos) {
		c -= 32; 
	}
	return c;
}

void print_vector(vector<int> &vec) {
	if(vec.empty()){
		cout << "[] - the list is empty" << endl;
	} else {
		cout << "[";
		for(int num: vec) {
			cout << " " << num;
		}
		cout << " ]" << endl;
	}
}

void add_value(vector<int> &vec) {
	int add {};
	cout << "Enter an integer to add to the list: ";
	cin >> add;
	vec.push_back(add);
	cout << add << " added" << endl;
}

double calculate_mean(vector<int> &vec) {
	if(vec.empty()) {
		cout << "Can't calculate mean, list is empty" << endl;
	} else {
		int sum {0};
		for(int num: vec) {
			sum += num;
		}
		return sum / vec.size();
	}
	return NULL;
}

int find_min(vector<int> &vec) {
	if(vec.empty()) {
		cout << "Can't find smallest number, list is empty" << endl;
	} else {
		int min {vec.at(0)};
		for(int num: vec) {
			min = (num < min) ? num : min;
		}
		return min;
	}
	return NULL;
}

int find_max(vector<int> &vec) {
	if(vec.empty()) {
		cout << "Can't find largest number, list is empty" << endl;
	} else {
		int max {0};
		for(int num: vec) {
			max = (num > max) ? num : max;
		}
		return max;
	}
	return NULL;
}