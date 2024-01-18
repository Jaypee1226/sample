#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main() {
    char name[100];
    cout << "Please Input your Name : "; 
    cin.getline(name, 100);
    system("cls");

    cout << "WELCOME " << name << "!" << endl;
    system("pause");
    system("cls");
    int choice;
    do {
        int category, val1, val2, result;

        cout << "\t\tMENU" << endl;
        cout << "[1] Addition" << endl;
        cout << "[2] Subtraction" << endl;
        cout << "[3] Multiplication" << endl;
        cout << "[4] Division" << endl;
        cout << "[5] Modulus" << endl;
        cout << "[6] Power" << endl;
        cout << "[7] Exit" << endl;

        cout << "Please select a category : ";
        cin >> category;

        if (category >= 1 && category <= 6) 
        {
            cout << "Please enter 2 Values : " << endl;
            cin >> val1 >> val2;
            system("cls");

            switch (category) {
            case 1:
                result = val1 + val2;
                break;
            case 2:
                result = val1 - val2;
                break;
            case 3:
                result = val1 * val2;
                break;
            case 4:
                if (val2 != 0) {
                    result = val1 / val2; 
                }
                else {
                    cout << "Invalid. Cannot divide by zero." << endl;
                }
                break;
            case 5:
                result = val1 % val2;
                break;
            case 6:
                result = pow(val1, val2);
                break;
            default:
                break;
            }

            cout << "Result is : " << result << endl;
            cout << "Do you want to continue? ([1] for YES | [0] for Exit) ";
            cin >> choice;
            system("cls");

        }
        else if (category == 7) {
            exit(0);
        }
        else {
            cout << "Invalid category. Exiting." << endl;
            exit(0);
        }

    } while (choice == 1);

    return 0;
}
                
