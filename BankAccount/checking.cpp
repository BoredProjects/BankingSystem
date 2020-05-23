#include "checking.h"

checking::checking(double percent, double min, double fee) {
	serviceFee = fee;
	minimal = min;
	interest = percent;
}
checking::checking() {
	serviceFee = 10;
	minimal = 100;
	interest = .5;
}
void checking::setInterest(double percent) {
	interest = percent;
}
double checking::getInterest() {
	return interest;
}
void checking::setMin(double min) {
	minimal = min;
}
double checking::getMin() {
	return minimal;
}
void checking::setServicecharge(double service) {
	serviceFee = service;
}
double checking::getServicecharge() {
	return serviceFee;
}
void checking::checkBal() {
	if (getBal() < getMin()) {
		cout << "Your account is below the minimal required amount therefore you will be charged " << serviceFee << "." << endl;
	}
	else {
		cout << "Your account is above the minimal required amount." << endl;
	}
}
void checking::returnAll() {
	cout << "Your account number is: " << getNum() << endl;
	cout << "Your account balance is: " << getBal() << endl;
	cout << "Your interest is: " << getInterest() << endl;
	cout << "Your minimal account balance must be: " << getMin() << endl;
	cout << "Your service fee is: " << getServicecharge() << endl;
	postInterest();
}
void checking::withdraw(double withdrawn) {
	double temp = getBal();
	temp -= withdrawn;
	setBal(temp);
	cout << "Your balance is: " << temp << endl;
}
void checking::postInterest() {
	double temp = getBal();
	double tempTwo = temp * getInterest();
	double postInt = temp + tempTwo;
	cout << "Your post interest balance will be: " << postInt << endl;
}