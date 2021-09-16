#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	string key {"urmycnfhjWFsaQeUXBJEloNxiPDdCwMYZLVTIKbHkvSqzptOgGRA"};
	string input {};
	
	cout << "Enter your secret message: ";
	std::getline(cin, input);
	
	cout << "\nEncrypting your message..." << endl;
	
	for(size_t i{0} ; i < input.size() ; ++i) {
		int index {-1};
		for(size_t j{0} ; j < alphabet.size() ; ++j) {
			if(input.at(i) == alphabet.at(j)) {
				index = j;
				break;
			}
		}
		if(index != -1) {
			input.replace(i, 1, 1, key.at(index));
		}
	}
	
	cout << "\nYour message encrypted is: " << input << endl;
	cout << "\nDecrypting your message..." << endl;
	
	for(size_t i{0} ; i < input.size() ; ++i) {
		int index {-1};
		for(size_t j{0} ; j < key.size() ; ++j) {
			if(input.at(i) == key.at(j)) {
				index = j;
				break;
			}
		}
		if(index != -1) {
			input.replace(i, 1, 1, alphabet.at(index));
		}
	}
	
	cout << "\nYour message decrypted is: " << input << endl;
	
	return 0;
}
