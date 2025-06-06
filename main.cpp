#include <iostream>

int main()
{

    int secretNumber = 100;
    int guess;
    std::cout << "Guess the secret number (between 1 and 200): ";
    std::cin >> guess;
    while (guess != secretNumber)
    {
        std::cout << "Guess the secret number : ";
        std::cin >> guess;
    }
    std::cout << "Congratulations! You've guessed the secret number: " << secretNumber << std::endl;
}
