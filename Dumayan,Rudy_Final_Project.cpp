// FINAL PROJECT 
// BSIT-1K
// DUMAYAN, RUDY P.
#include <iostream>
#include <cctype>
#include <string>
#include <vector> // I used Dynamic array
using namespace std;

struct Info {
    string data;
};

struct Account { // I group multiple variable into Account 
    string username;
    string password;
    vector<Info> infos; // It stores info related to this account
};

// Function to create an account
void createaccount(vector<Account>& accounts) {
    string pass, username;
    bool hasUpper, hasLower, hasDigit, hasPunct;

    cout << "Input a username: ";
    getline(cin, username);

label1: // I put label here
    cout << "\nCreate a Password: ";
    getline(cin, pass);

    hasUpper = hasLower = hasDigit = hasPunct = false;

    for (char c : pass) { 
        if (isupper(c)) hasUpper = true;
        if (islower(c)) hasLower = true;
        if (isdigit(c)) hasDigit = true;
        if (ispunct(c)) hasPunct = true;
    }

    if (!hasUpper || !hasLower || !hasDigit || !hasPunct) { //It checks every char if it doesn't have the condition bellow
        cout << "Password must contain at least:\n"
             << "* One uppercase\n"
             << "* One lowercase\n"
             << "* One digit\n"
             << "* One punctuation\n";
        goto label1; // If user doesn't met the condition it go to label1
    }

    cout << "Your Password Accepted!\n";
    accounts.push_back({username, pass}); // If all condition met the loop will stop and the data will add to the vector 
}

// I Add new Function to add student info
void studentinfo(Account& account) {
    Info info;
    cout << "ADD STUDENT INFO: ";
    getline(cin, info.data);
    account.infos.push_back(info);
    cout << "Student Info Saved!\n";
}

// I add another Function to display student info
void displayinfo(const Account& account) {
    if (!account.infos.empty()) { // If the infos from the account is not empty it display the info 
        cout << "\n--- Stored Student Info ---\n";
        for (const auto& info : account.infos) {
            cout << info.data << endl;
        }
    } else {
        cout << "No student info found.\n";// but if the infos is empty it display No info
    }
}

// I create Function to handle login
void login(vector<Account>& accounts) {
    string uname, pword;
    cout << "\nLOGIN\n";
    cout << "Username: ";
    getline(cin, uname);
    cout << "Password: ";
    getline(cin, pword);

    for (auto& acc : accounts) {
        if (acc.username == uname && acc.password == pword) {
            cout << "Login successful! Welcome, " << acc.username << "!\n";

            // I used 3 functions for log in
            char choice;
            do {
                cout << "\n[S]show Info\n[A]add Info\n[E]exit to Main Menu\n";
                cout << "Choose: ";
                cin >> choice;
                cin.ignore();

                if (choice == 'S' || choice == 's') {
                    displayinfo(acc); //first function
                } else if (choice == 'A' || choice == 'a') {
                    studentinfo(acc); // second function 
                }

            } while (choice != 'E' && choice != 'e'); // and third function to go to Main menu

            return;
        }
    }

    cout << "Invalid username or password.\n";
}

// Main menu
int main() {
    vector<Account> accounts;
    char choice;

    cout << "------- PLMUN STUDENT INFORMATION SYSTEM -------" << endl;

    while (true) { 
        cout << "\n[C] Create an Account\n[L] Login\n[E] Exit\n"; // Here I create 3 functions
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 'C' || choice == 'c') { // first function for creating an account 
            createaccount(accounts);
        } else if (choice == 'L' || choice == 'l') { // second function for login 
            login(accounts);
        } else if (choice == 'E' || choice == 'e') {// and last for the program Execution 
            cout << "Thank you for using the system. Goodbye!\n";
            break;
        } else {
            cout << "Invalid input. Please try again.\n";
        }
    }

    return 0;
}