#include <iostream>

using namespace std;

int main()
{
    int first_no, second_no;
    double result;
    char choice;

    cout << "\nEnter first number: ";
    cin >> first_no;

    cout << "Enter second number: ";
    cin >> second_no;

    cout << "\nOperations" << endl;
    cout << "\n1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case '1':
        result = first_no + second_no;
        break;

    case '2':
        result = first_no - second_no;
        break;

    case '3':
        result = first_no * second_no;
        break;

    case '4':
        if (second_no != 0)
        {
            result = first_no / second_no;
        }
        else
        {
            cout << "Error! Division by zero is not allowed." << endl;
            return 1;
        }
        break;

    default:
        cout << "Invalid Choice" << endl;
        return 1;
        break;
    }

    cout << "\nResult is " << result << endl;
    return 0;
}