// ACTIVITY 5
// BSIT-1K
// DUMAYAN, RUDY P.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    string cbrand;
    string ccolor;
    int quantity;
    vector<string> Array;
    char ask1, ask2;

    while (true) {
        cout << "Enter the Car Brand: ";
        cin >> cbrand;
        cout << "Enter the Car Color: ";
        cin >> ccolor;
        cout << "Enter the Car Quantity: ";
        cin >> quantity;

        Array.push_back(cbrand);
        Array.push_back(ccolor);
        Array.push_back(to_string(quantity));

        while (true) {
            cout << "DO YOU WANT TO ENTER ANOTHER DATA? Y/N?: ";
            cin >> ask1;

            if (ask1 == 'Y' || ask1 == 'y') {
                break; // Breaks out of the loop to enter new data
            } 
            else if (ask1 == 'N' || ask1 == 'n') {
                goto display_data;
            } 
            else {
                cout << "Invalid input! Please enter Y or N." << endl;
            }
        }
    }

display_data:
    while (true) {
        cout << "\nTHE DATA: " << endl;
        for (const string &item : Array) {
            cout << item << " " << endl;
        }

        while (true) {
            cout << "DO YOU WANT TO SHOW AGAIN THE DATA? Y/N?: ";
            cin >> ask2;

            if (ask2 == 'Y' || ask2 == 'y') {
                break;
            } 
            else if (ask2 == 'N' || ask2 == 'n') {
                cout << "THANK YOU!" << endl;
                return 0;
            } 
            else {
                cout << "Invalid Input! Please enter Y or N." << endl;
            }
        }
    }
    return 0;
}