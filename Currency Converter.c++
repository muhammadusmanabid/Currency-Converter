#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    const double USD_RATE = 281.75;
    const double EURO_RATE = 306.85;
    const double POUND_RATE = 357.74;
    const double DIRHAM_RATE = 76.71;
    const double RIYAL_RATE = 75.10;
    const double YUAN_RATE = 39.65;
    const double KUWAIT_DINAR_RATE = 916.07;
    const double CANADIAN_DOLLAR_RATE = 210.98;

    int choice;
    double amount;

    do {
       
        cout << "\nCurrency Converter Menu" << endl;
        cout << "1. PKR to Euro " << endl;
        cout << "2. PKR to USD " << endl;
        cout << "3. PKR to Pound " << endl;
        cout << "4. PKR to Dirham " << endl;
        cout << "5. PKR to Riyal " << endl;
        cout << "6. PKR to Yuan " << endl;
        cout << "7. PKR to Kuwait Dinar " << endl;
        cout << "8. PKR to Canadian Dollar " << endl;
        cout << "9. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

    
        switch (choice) {
            case 1:
                cout << "Enter amount in PKR: ";
                cin >> amount;
                cout << "Equivalent in EURO_RATE: " << fixed << setprecision(2) << amount / EURO_RATE << endl;
                break;
            case 2:
                cout << "Enter amount in PKR: ";
                cin >> amount;
                cout << "Equivalent in USD_RATE: " << fixed << setprecision(2) << amount / USD_RATE << endl;
                break;
            case 3:
                cout << "Enter amount in PKR: ";
                cin >> amount;
                cout << "Equivalent in POUND_RATE: " << fixed << setprecision(2) << amount / POUND_RATE << endl;
                break;
            case 4:
                cout << "Enter amount in PKR: ";
                cin >> amount;
                cout << "Equivalent in DIRHAM_RATE: " << fixed << setprecision(2) << amount / DIRHAM_RATE << endl;
                break;
            case 5:
                cout << "Enter amount in PKR: ";
                cin >> amount;
                cout << "Equivalent in RIYAL_RATE: " << fixed << setprecision(2) << amount / RIYAL_RATE << endl;
                break;
            case 6:
                cout << "Enter amount in PKR: ";
                cin >> amount;
                cout << "Equivalent in YUAN_RATE: " << fixed << setprecision(2) << amount / YUAN_RATE << endl;
                break;
            case 7:
                cout << "Enter amount in PKR: ";
                cin >> amount;
                cout << "Equivalent in KUWAIT_DINAR_RATE: " << fixed << setprecision(2) << amount / KUWAIT_DINAR_RATE << endl;
                break;
            case 8:
                cout << "Enter amount in PKR: ";
                cin >> amount;
                cout << "Equivalent in CANADIAN_DOLLAR_RATE: " << fixed << setprecision(2) << amount / CANADIAN_DOLLAR_RATE << endl;
                break;
            case 9:
                cout << "Exiting the Currency Converter. Thank you!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 9);

    return 0;
}