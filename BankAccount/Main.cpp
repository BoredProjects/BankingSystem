#include <iostream>
using namespace std;
#include "bankAccount.h"
#include "checking.h"
#include "savingsAccount.h"

void checkingStuff()
{

	cout << "This is a test for the checkings class." << endl;

	cout << endl;

	checking check;
	cout << check.getBal() << endl;
	check.setBal(1000);
	cout << check.getBal() << endl;

	cout << endl;

	check.deposit(200);
	check.checkBal();
	check.withdraw(2000);
	check.checkBal();

	cout << endl;

	cout << check.getInterest() << endl;
	check.setInterest(.153);
	cout << check.getInterest() << endl;

	cout << endl;

	cout << check.getMin() << endl;
	check.setMin(50);
	cout << check.getMin() << endl;

	cout << endl;

	cout << check.getNum() << endl;
	check.setNum(6464);
	cout << check.getNum() << endl;

	cout << endl;

	cout << check.getServicecharge() << endl;
	check.setServicecharge(50);
	cout << check.getServicecharge() << endl;

	cout << endl;

	check.postInterest();
	check.returnAll();

}

void savingsStuff() {
	savingsAccount savings;

	cout << "This is a test for the savings class." << endl;

	cout << endl;

	cout << savings.getInterest() << endl;
	savings.setInterest(50);
	cout << savings.getInterest() << endl;

	cout << endl;

	cout << savings.getBal() << endl;
	savings.withdraw(50);
	cout << savings.getBal() << endl;

	cout << endl;

	savings.postInterest();

	cout << endl;

	savings.returnAll();

}

int main() {
	checkingStuff();
	cout << endl;
	savingsStuff();
}

