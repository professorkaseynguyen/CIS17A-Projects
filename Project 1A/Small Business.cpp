// sample billing program
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

// prototypes
void greetings();
void treatments();
void doctors();
void balance(int, int);

// global variables
int treatment = 0;
int doctor = 0;
bool flag;

// main function
int main() {
	greetings();
	do {
	  treatments();
	  if (flag == false) {
	  	do {
	  		doctors();
	  		if (flag == false)
	  			balance(treatment,doctor);
	  	} while (flag);
	  }
	} while(flag);
  return 0;
}

// calculate the total balance
void balance(int treat, int doc) {
  // price of treatment
	double price_CheckUP = 49.99;
	double price_Physical = 149.99;
	double price_Surgery = 499.99;

  // price of doctor
	double price_Sara = 500.99;
	double price_Carl = 250.99;
	double price_Mark = 125.99;

	// print the balance
	cout << "**************** Receipt ***************\n\n";
	if (treat == 1 ) {
		if (doc == 1) {
			cout << "You had a Check up and you saw Dr Sara\n\n";
			cout << "Your balance is: $ ";
			cout << setprecision(7) << price_CheckUP * price_Sara;
			cout << "\n\nThank you for your business";
		} else if (doc == 2) {
			cout << "You had a Check up and you saw Dr Carl\n\n";
			cout << "Your balance is: $ ";
			cout << setprecision(7) << price_CheckUP * price_Carl;
			cout << "\n\nThank you for your business";
		} else if (doc == 3) {
			cout << "You had a Check up and you saw Dr Mark\n\n";
			cout << "Your balance is: $ ";
			cout << setprecision(7) << price_CheckUP * price_Mark;
			cout << "\nThank you for your business...";
		} else return;
	} else if (treat == 2) {
		if (doc == 1) {
			cout << "You had a Physical test and you saw Dr Sara\n\n";
			cout << "Your balance is: $ ";
			cout << setprecision(7) << price_Physical * price_Sara;
			cout << "\n\nThank you for your business";
		} else if (doc == 2) {
			cout << "You had a Physical test and you saw Dr Carl\n\n";
			cout << "Your balance is: $ ";
			cout << setprecision(7) << price_Physical * price_Carl;
			cout << "\n\nThank you for your business";
		} else if (doc == 3) {
			cout << "You had a Physical test and you saw Dr Mark\n\n";
			cout << "Your balance is: $ ";
			cout << setprecision(7) << price_Physical * price_Mark;
			cout << "\n\nThank you for your business...";
		} else return;
	} else if (treat == 3) {
		if (doc == 1) {
			cout << "You had a Surgery and you saw Dr Sara\n\n";
			cout << "Your balance is: $ ";
			cout << setprecision(9) << price_Surgery * price_Sara;
			cout << "\n\nThank you for your business\n\n";
		} else if (doc == 2) {
			cout << "You had a Surgery and you saw Dr Carl\n\n";
			cout << "Your balance is: $ ";
			cout << setprecision(8) << price_Surgery * price_Carl;
			cout << "\n\nThank you for your business\n\n";
		} else if (doc == 3) {
			cout << "You had a Surgery and you saw Dr Mark\n";
			cout << "Your balance is: $ ";
			cout << setprecision(7) << price_Surgery * price_Mark;
			cout << "\n\nThank you for your business...\n\n";
		} else return;
	} else return;
	cout << "\n\n************ End of Receipt ************\n\n";
}

// choose what type of doctor
void doctors() {
	flag = false;
	cout << "Please choose a doctor for your treatment:\n\n";
	cout << "Doctor\t\t\tPrice\n";
	cout << "------\t\t\t-----\n";
	cout << "1. Dr. Sara\t\t$ 500.99 (10 years experience)\n";
	cout << "2. Dr. Carl\t\t$ 250.99 ( 4 years experience)\n";
	cout << "3. Dr. Mark\t\t$ 125.99 (Intern)\n\n";
	cout << "Enter here: ";
	cin >> doctor;
	cout << endl;
	switch (doctor) {
		case 1: cout << "Dr. Sara is a great doctor\n\n";
	  	break;
		case 2: cout << "Great. Dr. Carl you now see you\n\n";
			break;
		case 3: cout << "Although Dr. Mark is an intern, he's very knowledable\n\n";
			break;
		default: cout << "Invalid option...\n";
			cin.clear();
			cin.ignore(99, '\n');
			flag = true;
			break;
	}
}

// choose what type of treatment
void treatments() {
	flag = false;
	cout << "Please choose a Treatment option:\n\n" ;
	cout << "Treatment\t\tPrice\n";
	cout << "---------\t\t-----\n";
	cout << "1. Check up\t\t$  49.99\n" ;
	cout << "2. Physical test\t$ 149.99\n";
	cout << "3. Surgery\t\t$ 499.00\n\n";
	cout << "Enter here: ";
	cin >> treatment;
	cout << endl;
	switch (treatment) {
		case 1: cout << "Great. You want a Check up\n\n";
			break;
		case 2: cout << "Ok. You want a Physical test\n\n";
			break;
		case 3: cout << "You want a Surgery\n\n";
			break;
		default: cout << "Invalid option...\n";
		  cin.clear();
		  cin.ignore(99, '\n');
		  flag = true;
			break;
	}
}

// greeting function
void greetings() {
	// local variables
	string name;
	int id = rand () % 99999 + 1;

	cout << endl;
	cout << "Welcome to my Billing Program\n";
  cout << "-----------------------------\n\n";
  cout << "Enter your name: " ;
  cin >> name;
	cout << endl;
	cout << "Welcome " + name;
	cout << ". Your Patient ID number is: ";
	cout << id;
	cout << "\n\n";
}
