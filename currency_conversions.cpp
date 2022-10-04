#include <iostream>
#include "currency_conversions.h"
using namespace std;

// Takes the inputted values and uses them to create the converted value
float converter(float amount, int conversion_num, float final_amount) {

    if (conversion_num == 1) {

        final_amount = amount * 1.02;
        cout << "$" << amount << " is " << final_amount << "euros.\n";
        return 0;

    }
    else if (conversion_num == 2) {

        final_amount = amount * 0.9;
        cout << "$" << amount << " is " << final_amount << " pounds.\n";
        return 0;

    }
    else if (conversion_num == 3) {

        final_amount = amount * 144.74;
        cout << "$" << amount << " is " << final_amount << " yen.\n";
        return 0;

    }
    else if (conversion_num == 4) {

        final_amount = amount * 1.38;
        cout << "$" << amount << " is " << final_amount << " Canadian dollars.\n";
        return 0;

    }
    else if (conversion_num == 5) {

        final_amount = amount * 1.56;
        cout << "$" << amount << " is " << final_amount << " Australian dollars.\n";
        return 0;

    }
    else if (conversion_num == 6) {

        final_amount = amount * 0.99;
        cout << "$" << amount << " is  " << final_amount << " francs.\n";
        return 0;

    }
    else if (conversion_num == 7) {

        final_amount = amount * 11.08;
        cout << "$" << amount << " is " << final_amount << " krona.\n";
        return 0;

    }
    else if (conversion_num == 8) {

        final_amount = amount * 20.15;
        cout << "$" << amount << " is " << final_amount << " pesos.\n";
        return 0;

    }
    else if (conversion_num == 9) {

        final_amount = amount * 81.64;
        cout << "$" << amount << " is " << final_amount << " rupees.\n";
        return 0;

    }
    else if (conversion_num == 10) {

        final_amount = amount * 60.2;
        cout << "$" << amount << " is " << final_amount << " rubles.\n";
        return 0;

    } else {

        cout << "Invalid input.\n";
    }

}