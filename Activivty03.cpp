#include <iostream>

 using namespace std; 
 
int main () 
{
    int age;
	double money;
	bool parents;
	string toPrintShow, toPrintMoney;
	cout << "Enter age: ";
	cin >> age;
	if(age<13) {
		cout << "with parent? ";
		cin >> parent:
	if(parent)
		 toPrintShow = "PG & G show.";
	 else
		 toPrintShow = "G show.";
	}
	else if(age<16) {
		cout << "with parent? ";
		cin >> parent;
		if(parent)
			toPrintMoney = "R,PG & G show. ";
		else
			toPrintShow = "PG & G show. ";
	}
	else 
		toPrintShow = "R, PG & G show. ";
	cout << "Enter Money: ";
	cin >> money;
	if(money<7.50)
		toPrintMoney = "not enough money.";
	else if(money<10.5)
		toPrintMoney = "Can go to matinee show.";
	else
		toPrintMoney = "Can go to evening & matines show.";
	cout << toPrintShow << endl;
	cout << toPrintMoney << endl;
	return 0;
}
		
