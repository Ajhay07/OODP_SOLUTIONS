#include <iostream>
using namespace std;
int main()
{
    int choice;
    int num1, num2;

    cout << "MENU\n";
    cout << "1. ADD\n";
    cout << "2. SUBRACT\n";
    cout << "3. MULTIPLY\n";
    cout << "4. DIVIDE\n";
    cout << "5. MODULUS\n";

    cout << "Enter your choice (1-5): ";
    cin >> choice;

    cout << "Enter two integer values: ";
    cin >> num1 >> " " >> num2;
    switch (choice)
    {
    case 1:
        cout << "Result: " << num1 + num2 << endl;
        break;
    case 2:
        cout << "Result: " << num1 - num2 << endl;
        break;
    case 3:
        cout << "Result: " << num1 * num2 << endl;
        break;
    case 4:
        cout << "Result: " << num1 / num2 << endl;
        break;
    case 5:
        cout << "Result: " << num1 % num2 << endl;
        break;
    default:
        cout << "Invalid choice!" << std::endl;
        break;
    }

    return 0;
}
