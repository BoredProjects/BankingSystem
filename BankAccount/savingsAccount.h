#pragma once
#include "bankAccount.h"

class savingsAccount : public bankAccount{
	private:
		double interest;
	public:
		savingsAccount(double percent);
		savingsAccount();
		void setInterest(double percent);
		double getInterest();
		void withdraw(double withdrawn);
		void returnAll();
		void postInterest();
};

