#include "savingsAccount.h"

savingsAccount::savingsAccount(double percent) {
	interest = percent;
}
savingsAccount::savingsAccount() {
	interest = .5;
}
void savingsAccount::setInterest(double percent) {
	interest = percent;
}
double savingsAccount::getInterest() {
	return interest;
}
void savingsAccount::withdraw(double withdrawn) {
	double temp = getBal();
	temp -= withdrawn;
	setBal(temp);
	cout << "Your balance is now: " << temp << endl;
}
void savingsAccount::postInterest() {
	double temp = getBal();
	double tempTwo = temp * getInterest();
	double postInt = temp + tempTwo;
	cout << "Your post interest balance will be: " << postInt << endl;
}
void savingsAccount::returnAll() {
	cout << "Your account number is: " << getNum() << endl;
	cout << "Your account balance is: " << getBal() << endl;
	cout << "Your interest is: " << getInterest() << endl;
	postInterest();
}