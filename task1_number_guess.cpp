#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));

    int secretNumber = rand() % 100 + 1;
    int guess;

    while (true)
    {
        cout << "Guess the number between 1 and 100: ";
        cin >> guess;

        if (guess == secretNumber)
        {
            cout << "Congratulations! You guessed the correct number." << endl;
            break;
        }

        else if (guess < secretNumber)
        {
            cout << "Too low! Try guessing a higher number." << endl;
        }
        else
        {
            cout << "Too high! Try guessing a lower number." << endl;
        }
    }

    return 0;
}
