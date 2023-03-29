#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <stdexcept> // for out_of_range
#include "player.hpp"
#include "card.hpp"

namespace ariel {

    class Game {
    private:
        Player player1;
        Player player2;
        std::deque<Card> deck;
        std::vector<std::string> log;

        // Helper function to shuffle the deck
        void shuffleDeck();

    public:
        // Constructor
        Game(Player player1, Player player2);

        // Function to play a single turn
        void playTurn();

        // Function to play the game until the end
        void playAll();

        // Function to print the last turn stats
        void printLastTurn();

        // Function to print the game log
        void printLog();

        // Function to print the game statistics
        void printStats();

        // Function to print the winning player
        void printWiner();
    };
}

#endif // GAME_HPP
