#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string input {};
	
	cout << "Enter a string: ";
	std::getline(cin, input);
	
	string reverse_input {};

	for(int i{static_cast<int>(input.size())-1} ; i >= 0 ; --i) {
		reverse_input += input.at(i);
	}
	
	string output {};
	for(size_t i{0} ; i < input.size() ; ++i) {
		string new_line {"\n" + input};
		input.erase(input.end() - 1, input.end());
		input = " " + input;
		reverse_input.erase(reverse_input.begin(), reverse_input.begin() + 1); 
		reverse_input += " ";
		new_line += reverse_input;
		output = new_line + output;
	}
	
	cout << output << endl;
	
	return 0;
}
