#pragma once
#include "bankAccount.h"

class checking : public bankAccount{
	private:
		double interest;
		double minimal;
		double serviceFee;
	public:
		checking(double percent, double min, double service);
		checking();
		void setInterest(double percent);
		double getInterest();
		void setMin(double min);
		double getMin();
		void setServicecharge(double service);
		double getServicecharge();
		void checkBal();
		void returnAll();
		void withdraw(double withdrawn);
		void postInterest();
};

