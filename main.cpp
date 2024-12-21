#include <iostream>
#include <cstdlib>
using namespace std;

void easyMode();

void mediumMode();

void hardMode();

int main() {
    cout << "Number Guessing Game" << endl;
    cout << "Select your difficulty level" << endl;
    cout << "1. Easy" << endl;
    cout << "2. Medium" << endl;
    cout << "3. Hard" << endl;
    cout << "4. Exit" << endl;
    int choice;
    do {
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Easy mode selected" << endl;
            easyMode();
            break;
        case 2:
            cout << "Medium mode selected" << endl;
            mediumMode();
            break;
        case 3:
            cout << "Hard mode selected" << endl;
            hardMode();
            break;
        case 4:
            cout << "Exiting game" << endl;
            exit(0);
            break;
        }
    } while (choice > 4);
    return 0;
}

void easyMode() {
    cout << "you have 10 chances to guess the number" << endl;
    cout << "The number is between 1 and 100" << endl;
    srand(time(0));
    cout << endl;
    cout << endl;
    cout << endl;
    int number = rand() % 100 + 1;
    int guess;
    int chances = 10;
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        if (guess == number) {
            cout << "Congratulations! You guessed the number" << endl;
            break;
        } else if (guess < number) {
            cout << "The number is greater than " << guess << endl;
        } else {
            cout << "The number is less than " << guess << endl;
        }
        chances--;
        cout << "Chances left: " << chances << endl;
        cout << endl;
    
    } while (chances > 0);
    cout << "The number was: " << number << endl;
    cout << "Game over" << endl;
}

void mediumMode() {
    cout << "you have 15 chances to guess the number" << endl;
    cout << "The number is between 1 and 1000" << endl;
    srand(time(0));
    cout << endl;
    cout << endl;
    cout << endl;
    int number = rand() % 1000 + 1;
    int guess;
    int chances = 15;
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        if (guess == number) {
            cout << "Congratulations! You guessed the number" << endl;
            break;
        } else if (guess < number) {
            cout << "The number is greater than " << guess << endl;
        } else {
            cout << "The number is less than " << guess << endl;
        }
        chances--;
        cout << "Chances left: " << chances << endl;
        cout << endl;
    
    } while (chances > 0);
    cout << "The number was: " << number << endl;
    cout << "Game over" << endl;
}

void hardMode() {
    cout << "you have 30 chances to guess the number" << endl;
    cout << "The number is between 1 and 100000" << endl;
    srand(time(0));
    cout << endl;
    cout << endl;
    cout << endl;
    int number = rand() % 100000 + 1;
    int guess;
    int chances = 30;
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        if (guess == number) {
            cout << "Congratulations! You guessed the number" << endl;
            break;
        } else if (guess < number) {
            cout << "The number is greater than " << guess << endl;
        } else {
            cout << "The number is less than " << guess << endl;
        }
        chances--;
        cout << "Chances left: " << chances << endl;
        cout << endl;
    
    } while (chances > 0);
    cout << "The number was: " << number << endl;
    cout << "Game over" << endl;
}