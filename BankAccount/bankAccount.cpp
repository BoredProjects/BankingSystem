#include "bankAccount.h"

bankAccount::bankAccount(int num,double bal) {
	accountNum = num;
	accountBalance = bal;
}
bankAccount::bankAccount() {
	accountNum = 1000;
	accountBalance = 500;
}
void bankAccount::setBal(double bal) {
	accountBalance = bal;
}
void bankAccount::setNum(int num) {
	accountNum = num;
}
void bankAccount::deposit(double dep) {
	accountBalance += dep;
	cout << "Your balance is: " << accountBalance << endl;
}
void bankAccount::withdraw(double withdrawn) {
	accountBalance -= withdrawn;
	cout << "Your balance is: " << accountBalance << endl;
}
double bankAccount::getBal() {
	return accountBalance;
}
int bankAccount::getNum() {
	return accountNum;
}
void bankAccount::showAll() {
	cout << "Your balance is: " << accountBalance << endl;
	cout << "Your account number is: " << accountNum << endl;
}

