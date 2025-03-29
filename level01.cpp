#include <iostream>
#include <string>
using namespace std;

string decrypt(const string& encryptedText, int shift) {
    string decrypted = encryptedText;
    for (char& c : decrypted) {
        c -= shift; // Reverse the shift to get the original text
    }
    return decrypted;
}

int main() {
    string encryptedPassword;
    int shift;

    // User inputs encrypted text and shift value
    cout << "Enter the encrypted password: ";
    cin >> encryptedPassword;
    cout << "Enter the shift value: ";
    cin >> shift;

    // Decrypt and display
    string decryptedPassword = decrypt(encryptedPassword, shift);
    cout << "Decrypted Password: " << decryptedPassword << endl;
    
    return 0;
}