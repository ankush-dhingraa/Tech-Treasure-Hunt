#include <iostream>
#include <string>
using namespace std;

string encrypt(const string& text, int shift) {
    string encrypted = text;
    for (char& c : encrypted) {
        c += shift;
    }
    return encrypted;
}

string decrypt(const string& text, int shift) {
    string decrypted = text;
    for (char& c : decrypted) {
        c -= shift;
    }
    return decrypted;
}

int main() {
    int choice;
    string password;
    int shift;
    
    do {
        cout << "\nMenu:\n";
        cout << "1. Encrypt Password\n";
        cout << "2. Decrypt Password\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter password to encrypt: ";
                cin >> password;
                cout << "Enter shift value: ";
                cin >> shift;
                cout << "Encrypted Password: " << encrypt(password, shift) << endl;
                break;
            
            case 2:
                cout << "Enter password to decrypt: ";
                cin >> password;
                cout << "Enter shift value: ";
                cin >> shift;
                cout << "Decrypted Password: " << decrypt(password, shift) << endl;
                break;
            
            case 3:
                cout << "Exiting the program.\n";
                break;
            
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 3);
    
    return 0;
}
