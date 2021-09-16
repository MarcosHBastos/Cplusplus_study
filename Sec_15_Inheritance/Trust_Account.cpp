#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate) :
	Savings_Account(name, balance, int_rate), total_withdraws {0}
{
}

int Trust_Account::get_total_withdraws() const {
	return total_withdraws;
}

void Trust_Account::increase_total_withdraws() {
	total_withdraws++;
}

bool Trust_Account::deposit(double amount) {
	if(amount >= 5000) {
		std::cout << get_name() << " gets a bonus tax of " << bonus_tax << " for depositing more than $5.000 at once. Congrats!" << std::endl;
		return Savings_Account::deposit(amount + bonus_tax);
	} else {
		return Savings_Account::deposit(amount);
	}
}

bool Trust_Account::withdraw(double amount) {
	if(get_total_withdraws() >= 3) {
		std::cout << "Can't withdraw: " << get_name() << " already reached the maximum quantity of 3 withdraws!" << std::endl;
		return false;
	} else if(amount > (Account::get_balance() * 0.2)) {
		std::cout << "Can't withdraw: " << get_name() << " is trying to withdraw is more than the 20% of the total balance!" << std::endl;
		return false;
	} else {
		if(Savings_Account::withdraw(amount)) {
			increase_total_withdraws();
			return true;
		}
	}
	return false;
}

