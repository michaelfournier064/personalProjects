#include <iostream>

using namespace std;

int main() {
    int length;
    
    // Ask the user to input the length of the string
    cout << "Enter the length of the text: ";
    cin >> length;

    // Dynamically allocate memory for the character array
    char* hope = new char[length + 1];
    
    cin.ignore();
    
    // Prompt the user to enter the text
    cout << "Enter the text you want to be capitalized: ";
    cin.getline(hope, length + 1);

    // Output the capitalized text
    cout << "The capitalized text is: " << endl;
    
    // Loop through each character in the dynamic array
    for (int i = 0; hope[i] != '\0'; i++) {

        if (hope[i] >= 'a' && hope[i] <= 'z') {
            cout << static_cast<char>(hope[i] - ('a' - 'A'));
        } else {
            cout << hope[i]; // Leave non-lowercase characters unchanged
        }
    }

    cout << endl;

    // Deallocate the dynamically allocated memory
    delete[] hope;

    return 0;
}
