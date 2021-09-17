#include <iostream>
#include <stdlib.h>

//Plays a game of rock paper skizzors!

int main()
{
while(true)
    {
std::string rock, paper, scissors, lizard, spock, weapon;


std::cout << "=============|||||||============== \n";
std::cout << "   Lets play rock, paper, spock!  \n";
std::cout << "=============|||||||============== \n";
std::cout << "       Here are the rules:        \n";
std::cout << "   1. Paper > Rock & Spock        \n";
std::cout << "   2. Scissors > Paper & Lizard   \n";
std::cout << "   3. Rock > Scissors & Lizard    \n";
std::cout << "   4. Lizard > Paper & Spock      \n";
std::cout << "   5. Spock > Scissors & Rock     \n";
std::cout << " PRESS ENTER TO START THE BATTLE! \n";

std::cin.ignore();

std::cout << "Choose your weapon: Rock, Paper, Scissors, Lizard, Spock." << std::endl;
std::cin >> weapon;

int enemy_weapon = rand() % 5; 

std::cout << enemy_weapon;

switch (enemy_weapon)
{
    //case 0 is rock which Loses to scissor and lizard
case 0:
    if ((weapon == "Scissors") || (weapon == "Scissor") || (weapon == "scissor") || (weapon == "scissors") || (weapon == "Lizard") || (weapon == "lizard"))
    {
        std::cout << "Your enemy chose 'ROCK'!" << std::endl;
        std::cout << "You Lose!" << std::endl;
        std::cin.ignore();
    }
    else
    {
        std::cout << "Your enemy chose 'ROCK'!" << std::endl;
        std::cout << "You Win!" << std::endl;
        std::cin.ignore();
    }
    break;


    //case is paper which Loses to Rock and Spock
case 1:
    if ((weapon == "Rock") || (weapon == "rock") || (weapon == "spock") || (weapon == "Spock"))
    {
        std::cout << "Your enemy chose 'PAPER'!" << std::endl;
        std::cout << "You Lose!" << std::endl;
        std::cin.ignore();
    }
    else
    {
        std::cout << "Your enemy chose 'PAPER'!" << std::endl;
        std::cout << "You Win!" << std::endl;
        std::cin.ignore();
    }
    break;

    //case is scissors which Loses to paper and lizard
case 2:
    if ((weapon == "paper") || (weapon == "Paper") || (weapon == "Lizard") || (weapon == "lizard"))
    {
        std::cout << "Your enemy chose 'SCISSOR'!" << std::endl;
        std::cout << "You Lose!" << std::endl;
        std::cin.ignore();
    }
    else
    {
        std::cout << "Your enemy chose 'SCISSOR'!" << std::endl;
        std::cout << "You Win!" << std::endl;
        std::cin.ignore();
    }
    break;

 //case is lizard which Loses to paper and spock
case 3:
    if ((weapon == "paper") || (weapon == "Paper") || (weapon == "Spock") || (weapon == "spock"))
    {
        std::cout << "Your enemy chose 'LIZARD'!" << std::endl;
        std::cout << "You Lose!" << std::endl;
        std::cin.ignore();
    }
    else
    {
        std::cout << "Your enemy chose 'LIZARD'!" << std::endl;
        std::cout << "You Win!" << std::endl;
        std::cin.ignore();
    }
    break;

 //case is spock which Loses to scissor and rock
case 4:
    if ((weapon == "Scissors") || (weapon == "Scissor") || (weapon == "scissor") || (weapon == "scissors") || (weapon == "Rock") || (weapon == "rock"))
    {
        std::cout << "Your enemy chose 'SPOCK'!" << std::endl;
        std::cout << "You Lose!" << std::endl;
        std::cin.ignore();
    }
    else
    {
        std::cout << "Your enemy chose 'SPOCK'!" << std::endl;
        std::cout << "You Win!" << std::endl;
        std::cin.ignore();
    }
    break;
default:

    std::cout << "You broke it." << std::endl;
    break;
}

std::string yes_no;

std::cout << "Want to play again?" << std::endl;
std::cout << "    Yes or No?     " << std::endl;

std::cin >> yes_no;
if(yes_no == "yes" || yes_no == "Yes")
    {
        std::cout << "..............................." << std::endl;
    }

else
    {
        return 1;
    }
}
}