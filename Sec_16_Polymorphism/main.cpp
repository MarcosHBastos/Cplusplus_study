// Section 16 
// Challenge 
#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std; 

int main() {
    cout.precision(2);
    cout << fixed;
    
	Account *sav_account = new Savings_Account ();
	Account *check_account = new Checking_Account {"Bones", 5000};
	Account *trust_account = new Trust_Account {"Porthos", 20000, 4.0};

    vector<Account *> accounts {sav_account, check_account, trust_account};
	
	display(accounts);
	deposit(accounts, 1000);
	display(accounts);
	withdraw(accounts, 500);
	display(accounts);
	
	delete sav_account;
	delete check_account;
	delete trust_account;
	
    return 0;
}

