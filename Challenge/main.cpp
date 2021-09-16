#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"
#include "IllegalBalanceException.h"
#include "InsufficientFundsException.h"

using namespace std;

int main() {
    // test your code here
	try {
		Account *a = new Checking_Account("teste 1", -10);
	} catch (IllegalBalanceException &ibe) {
		cerr << ibe.what() << endl;
	}
	
	Account *b = new Checking_Account("teste 2", 20);
	try {
		b->withdraw(50000);
	} catch (InsufficientFundsException &ife) {
		cerr << ife.what() << endl;
	}
	
    std::cout << "Program completed successfully" << std::endl;
    return 0;
}

