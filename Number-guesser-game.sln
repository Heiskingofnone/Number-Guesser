
#include <iostream>
#include <random>

int randomNumber();
void tryout(int guess, int num);


int main()
{
    std::cout << "*****************************************************\n";
    std::cout << "Welcome to the number Guessing Game!!!";
    int quit = 0;
    do {
    int level;
    int num = randomNumber();
    int guess;
    int tries;
    


   
    std::cout << "Please select difficulty level: \n";
    std::cout << "1, Easy mode: 10 tries \n 2, Medium mode: 5 tries \n 3, Hard mode: 3 tries \n 4, SICKO MODE: 1 TRY!! \n 5, Quit\n";
    std::cin >> level;
    
    
        
        switch (level) {
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
            quit = 1;
            std::cout << "Goodbye! \n";
            break;
        default: std::cout << "Choose a valid level please";
            
        }
        if (quit == 0) {
            std::cout << "I am thinking of a number, from 1 to 100, guess the number: ";
            for (int i = 1; i <= tries; i++) {

                std::cin >> guess;

                if (guess == num) {
                    std::cout << "You guessed right!,the number is " << guess << '\n';
                }
                else if (guess < num) {
                    std::cout << "You guessed wrong! The number is higher than " << guess << " try again!\n";
                }
                else if (guess > num) {
                    std::cout << "You guessed wrong! The number is lower than " << guess << " try again!\n";
                }
                else if (guess < 0 || guess>100) {
                    std::cout << " Your number has to be among 1-100, try again! \n";
                }
                else {
                    std::cout << "invalid number : " << guess << " try again";
                }
            }
        }
        } while (quit==0);

}

int randomNumber() {
    
        std::mt19937 gen(std::random_device{}());
        std::uniform_int_distribution<int> dist(1, 100);

        int num = dist(gen);

        return num;
}

void tryout(int guess, int num) {
   
       
        if (guess == num) {
            std::cout << "you guessed right!!!\n";
            
        }
        else if (guess > num){
            std::cout << "You guessed wrong, The number is greater than " << guess << '\n';
            std::cin >> guess;
        }
        else if (guess < num){
            std::cout << "You guessed wrong, The number is less than " << guess << '\n';
            std::cin >> guess;

        }
        else{
            std::cout << "Your number is invalid, Enter a valid number among 1 - 100:";
        }
   
}
