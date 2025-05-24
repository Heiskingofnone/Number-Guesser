
#include <iostream>
#include <random>

int randomNumber();

int main()
{
    int level;
    int tries = 0;

    int quit = 0;
    std::cout << "*****************************************************\n";
    std::cout << "Welcome to the number Guessing Game!!!\n";
    do
    {
        do
        {
            std::cout << "1. Easy mode: 10 tries (Relaxed gameplay)\n";
            std::cout << "2. Medium mode: 5 tries (Moderate challenge)\n";
            std::cout << "3. Hard mode: 3 tries (For experienced players)\n";
            std::cout << "4. SICKO MODE: 1 try (Extreme difficulty!)\n";
            std::cout << "5. Quit\n";

            std::cin >> level;
            if (std::cin.fail())
            {
                std::cin.clear();                                                   // Clear error flag
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
                std::cout << "Invalid input. Please enter a number between 1 and 100.\n";
                continue; // Skip to the next iteration
            }
            else if (level != 1 && level != 2 && level != 3 && level != 4 && level != 5)
            {
                std::cout << "Enter a valid Level!\n";
            }
        } while (level != 1 && level != 2 && level != 3 && level != 4 && level != 5);

        switch (level)
        {
        case 1:
            tries = 10;
            break;
        case 2:
            tries = 5;
            break;
        case 3:
            tries = 3;
            break;
        case 4:
            tries = 1;
            break;
        case 5:
            tries = 0;
            break;
        }

        int rand = randomNumber();

        int guess;
        std::cout << "I am thinking of a number between 1 - 100\n";
        std::cout << "Guess: ";
        for (int i = 1; i <= tries; i++)
        {

            std::cin >> guess;
            if (std::cin.fail() || guess < 1 || guess > 100)
            {
                std::cin.clear();                                                   // Clear error flag
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
                std::cout << "Invalid input. Please enter a number between 1 and 100.\n";
                i--;
                continue; // Skip to the next iteration
            }
            if (guess == rand)
            {
                std::cout << "Your Guess is correct!\n";
                std::cout << "You won in " << i << " tries\n";
                break;
            }
            else if (guess < rand)
            {

                std::cout << "Number is greater than " << guess << "\n";
            }
            else if (guess > rand)
            {
                std::cout << "Number is less than " << guess << "\n";
            }
        }
        if (guess != rand)
        {
            std::cout << "GAME OVER!!!\n";
        }
        std::cout << "Would you like to try again? \n";
        std::cout << "Yes :1 OR No :2 | Answer :";
        int answer;
        do
        {
            std::cin >> answer, '\n';
            if (std::cin.fail())
            {
                std::cin.clear();                                                   // Clear error flag
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
                std::cout << "Invalid input. Please enter a number between 1 and 100.\n";
                continue; // Skip to the next iteration
            }
            else if (answer == 2)
            {
                tries = 0;
                std::cout << "Goodbye!\n";
            }
            else if (answer != 1 && answer != 2)
            {
                std::cout << "Enter a valid number please between 1 and 100\n";
                std::cout << "Yes :1 OR No :2 | Answer :";
            }
        } while (answer != 1 && answer != 2);

    } while (tries != 0);
}

int randomNumber()
{

    std::mt19937 gen(std::random_device{}());
    std::uniform_int_distribution<int> dist(1, 100);

    int num = dist(gen);

    return num;
}
