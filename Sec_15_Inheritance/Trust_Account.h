#ifndef TRUST_ACCOUNT_HPP
#define TRUST_ACCOUNT_HPP
#include <stdio.h>

#include "Savings_Account.h" // Base class: Savings_Account

class Trust_Account : public Savings_Account
{
private:
	static constexpr const char *def_name = "Unnamed Trust Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
	static constexpr double bonus_tax = 50;
	int total_withdraws;
public:
	
	Trust_Account(std::string name = def_name, double balance =def_balance, double int_rate = def_int_rate);
	
	int get_total_withdraws() const;
	void increase_total_withdraws();
	
	bool deposit(double amount);
	bool withdraw(double amount);

};

#endif // TRUST_ACCOUNT_HPP
