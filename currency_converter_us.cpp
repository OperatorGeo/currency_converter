/* Currency Converter (US)
9/30/2022
Accepts input of a digit that represents a listed currency as well as an amount to be converted, and converts it to the chosen currency */

#include <iostream>
#include <vector>
#include "currency_conversions.h"
using namespace std;

int main() {

	// Lists the currencies and lets the user input what currency they want to convert to
	int conversion_num;
	vector<string> currencies = { "Euro", "Pound Sterling", "Japanese Yen", "Canadian Dollar", "Australian Dollar", "Swiss Franc", "Swedish Krona", "Mexican Peso", "Indian Rupee", "Russian Ruble" };
	cout << "Currency List\n";
	cout << "1 - " << currencies[0] << "\n2 - " << currencies[1] << "\n3 - " << currencies[2] << "\n4 - " << currencies[3] << "\n5 - " << currencies[4] << "\n6 - " << currencies[5] << "\n7 - " << currencies[6] << "\n8 - " << currencies[7] << "\n9 - " << currencies[8] << "\n10 - " << currencies[9];
	cout << "\nPlease pick what currency you are converting to: ";
	cin >> conversion_num;

	// Lets the user input the amount they would like to convert
	float total;
	cout << "\nPlease input the amount you would like to convert: ";
	cin >> total;

	// The function 'converter' converts the amount given to the chosen currency and outputs it
	converter(total, conversion_num);

	// Exits the program when the user inputs anything and presses enter
	string exit;
	cout << "Press any button + enter to exit.\n";
	cin >> exit;

}