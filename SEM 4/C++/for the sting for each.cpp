#include <iostream>
#include <string>

using namespace std;

int main() {
    // Static array with fixed size of 3 lines
    string lines[3] = {"kalpesh", "hfjdh", "fhj"};
    string line;
    
    // No need to ask for `n`, we simply allow input for 3 lines
    cout << "Please enter 3 lines of text:" << endl;
    
    // Input exactly 3 lines
//    for (int i = 0; i < 3; ++i) {
//        getline(cin, lines[i]);  // Directly store input in the static array
//    }
    
    int choice;
    cout << "Enter the line number (1 to 3) you want to see: ";
    cin >> choice;

    // Validate the choice and display the chosen line
    if (choice >= 1 && choice <= 3) {
        cout << "You chose: " << lines[choice - 1] << endl;  // Display the chosen line
    } else {
        cout << "Invalid choice! Please choose a valid line number." << endl;
    }
    
    return 0;
}

