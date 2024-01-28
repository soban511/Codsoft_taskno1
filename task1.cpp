#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

void guess_game (string choice = "Yes")
{
    if (choice == "YES" || choice == "Yes" || choice == "yes")
    {
        system ("cls");
        srand (time (0));
        int no = rand () % 100;

        int guess = -1;

        cout << endl << endl;
        cout << setw (100) << "==============================================================" << endl;
        cout << setw (100) << "          *** Welcome to my number guessing game ***          " << endl;
        cout << setw (100) << "           Guess the choosen number between 0 to 99           " << endl;
        cout << setw (100) << "==============================================================" << endl << endl << endl;

        while (guess != no)
        {
            cout << setw (76) << "Enter your number: ";
            cin >> guess;

            if (guess > no)
            {
                cout << setw (93) << "Oops! you guessed higher than the actual number." << endl << endl;
            }

            if (guess < no)
            {
                cout << setw (93) << "Oops! you guessed lower than the actual number. " << endl << endl;
            }
        }

        cout << setw (100) << "==============================================================" << endl << endl;
        cout << setw (87) << "Yahoo! you guessed the right number." << endl;
        cout << setw (81) << "Do you want to play again: ";
        cin >> choice;

        guess_game (choice);
    }

    system ("cls");
    cout << endl << endl << endl;
    cout << setw (100) << "==============================================================" << endl;
    cout << setw (100) << "                    Thank You for playing.                    " << endl;
    cout << setw (100) << "                        See You Again.                        " << endl;
    cout << setw (100) << "==============================================================" << endl;
    cout << endl << endl << endl;

    return;
}

int main ()
{
    guess_game ();

    return 0;
}