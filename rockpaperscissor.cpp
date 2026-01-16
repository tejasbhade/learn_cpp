#include <iostream>
#include <cstdlib>
#include <ctime>

// Function to get computer's choice
std::string getComputerChoice() {
    int random = rand() % 3;  // 0, 1, or 2
    
    if (random == 0) return "rock";
    else if (random == 1) return "paper";
    else return "scissor";
}

// Function to determine the winner
std::string determineWinner(std::string player, std::string computer) {
    if (player == computer) {
        return "It's a tie!";
    }
    
    if ((player == "rock" && computer == "scissor") ||
        (player == "paper" && computer == "rock") ||
        (player == "scissor" && computer == "paper")) {
        return "You win!";
    }
    
    return "Computer wins!";
}

int main() {
    // Seed random number generator
    srand(time(0));
    
    std::string playerChoice;
    
    std::cout << "=== Rock Paper Scissor Game ===\n\n";
    std::cout << "Enter your choice (rock, paper, scissor): ";
    std::cin >> playerChoice;
    
    // Validate input
    if (playerChoice != "rock" && playerChoice != "paper" && playerChoice != "scissor") {
        std::cout << "Invalid choice! Please enter rock, paper, or scissor.\n";
        return 1;
    }
    
    std::string computerChoice = getComputerChoice();
    
    std::cout << "\nYour choice: " << playerChoice << "\n";
    std::cout << "Computer's choice: " << computerChoice << "\n\n";
    std::cout << determineWinner(playerChoice, computerChoice) << "\n";
    
    return 0;
}
