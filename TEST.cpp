#include <iostream>
#include <cmath>

using namespace std;

void displayMenu() {
    cout << "Menu:\n";
    cout << "1. Sine\n";
    cout << "2. Cosine\n";
    cout << "3. Tangent\n";
    cout << "4. Quit\n";

    cout << "Enter your choice: ";
}

int main() {
    int choice;
    double angle;

    do {
        displayMenu();
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter the angle in degrees: ";
                cin >> angle;
                cout << "Sine of " << angle << " degrees is " << sin(angle * M_PI / 180.0) << endl;
                break;
            case 2:
                cout << "Enter the angle in degrees: ";
                cin >> angle;
                cout << "Cosine of " << angle << " degrees is " << cos(angle * M_PI / 180.0) << endl;
                break;
            case 3:
                cout << "Enter the angle in degrees: ";
                cin >> angle;
                cout << "Tangent of " << angle << " degrees is " << tan(angle * M_PI / 180.0) << endl;
                break;
            case 4:
                cout << "Quitting program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while(choice != 4);

    return 0;
}
