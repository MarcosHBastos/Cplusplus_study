#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

int main() {
	std::cout << "Please enter a word to search for: ";
	std::string word;
	std::cin >> word;
	
	std::ifstream in_file;
	in_file.open("romeoandjuliet.txt");
	
	if(!in_file) {
		std::cerr << "Failed to open the file" << std::endl;
		return 1;
	}
	
	int count {0};
	int total_count {0};
	std::string current;
	while(in_file >> current) {
		if(current.find(word) != std::string::npos)
			count++;
		total_count++;
	}
	
	std::cout << total_count << " words were searched..." << std::endl;
	std::cout << "The substring " << word << " was found " << count << " times" << std::endl;

	return 0;
}
