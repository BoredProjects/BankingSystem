#pragma once
#include <iostream>
using namespace std;

class bankAccount
{
	private:
		int accountNum;
		double accountBalance;
	public:
		bankAccount();
		bankAccount(int num, double bal);
		void setBal(double bal);
		void setNum(int num);
		void withdraw(double withdrawn);
		void deposit(double dep);
		double getBal();
		int getNum();
		void showAll();
};

