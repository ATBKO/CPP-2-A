#include "game.hpp"
#include "player.hpp"

using namespace ariel;

Game::Game(Player p1, Player p2) : player1(p1), player2(p2), deck(), log() {
    // Create a new deck and shuffle it
    for (int i = 1; i <= 13; i++) {
        deck.push_back(Card(i, ariel::Card::Shape::SPADES));
        deck.push_back(Card(i, ariel::Card::Shape::HEARTS));
        deck.push_back(Card(i, ariel::Card::Shape::CLUBS));
        deck.push_back(Card(i, ariel::Card::Shape::DIAMONDS));
    }

    shuffleDeck();
    // Initialize the log with a message indicating the start of the game
    log.emplace_back("Starting a new game between " + player1.getName() + " and " + player2.getName());
}




// Function to play a single turn
void Game::playTurn() {
    // Check if deck is empty
//    if (deck.empty()) {
//        return;
//    }
//    // Draw a card for each player
//    Card p1_card = player1.drawCard();
//    Card p2_card = player2.drawCard();
//
//    // Add cards to log
//    log.emplace_back(player1.getName() + " drew " + std::to_string(p1_card.getValue()) +
//                     " of shape " + std::to_string(p1_card.getShape()));
//    log.emplace_back(player2.getName() + " drew " + std::to_string(p2_card.getValue()) +
//                     " of shape " + std::to_string(p2_card.getShape()));
//
//    // Check who has the higher card
//    if (p1_card.getValue() > p2_card.getValue()) {
//        player1.addCards({p1_card, p2_card});
//        log.emplace_back(player1.getName() + " won the turn");
//    } else if (p1_card.getValue() < p2_card.getValue()) {
//        player2.addCards({p1_card, p2_card});
//        log.emplace_back(player2.getName() + " won the turn");
//    } else {
//        log.emplace_back("Tie!");
//    }
}

// Function to print the last turn stats
void Game::printLastTurn(){
    if (log.empty()) {
        std::cout << "No turns have been played yet" << std::endl;
    } else {
        std::cout << log.back() << std::endl;
    }
}

// Function to play the game until the end
void Game::playAll() {
    return;
    while (!deck.empty()) {
        playTurn();
    }
}

// Function to print the winning player
void Game::printWiner(){
    if (player1.cardesTaken() > player2.cardesTaken()) {
        std::cout << player1.getName() << " won the game!" << std::endl;
    } else if (player1.cardesTaken() < player2.cardesTaken()) {
        std::cout << player2.getName() << " won the game!" << std::endl;
    } else {
        std::cout << "The game ended in a tie!" << std::endl;
    }
}

// Function to print the game log
void Game::printLog(){
    for (const auto &entry: log) {
        std::cout << entry << std::endl;
    }
}

// Function to print the game statistics
void Game::printStats(){
    std::cout << player1.getName() << " won " << player1.cardesTaken() << " cards" << std::endl;
    std::cout << player2.getName() << " won " << player2.cardesTaken() << " cards" << std::endl;
}

void Game::shuffleDeck() {
    std::random_shuffle(deck.begin(), deck.end());
}




