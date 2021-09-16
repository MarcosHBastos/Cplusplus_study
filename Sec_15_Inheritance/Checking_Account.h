#ifndef CHECKING_ACCOUNT_HPP
#define CHECKING_ACCOUNT_HPP
#include "Account.h"


class Checking_Account : public Account
{
private:
	static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
	static constexpr double withdraw_fee = 1.50;
public:
	
	Checking_Account(std::string name = def_name, double balance = def_balance);
	
	double get_withdraw_fee() const;
	bool withdraw(double amount);

};

#endif // CHECKING_ACCOUNT_HPP
