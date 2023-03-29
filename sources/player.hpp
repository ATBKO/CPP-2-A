#ifndef INC_2TASK_PLAYER_HPP
#define INC_2TASK_PLAYER_HPP

#include <string>
#include <vector>
#include "card.hpp"

namespace ariel {

    class Player {
    private:
        std::string name;
        std::vector<Card> hand;
        int cardsTaken;

    public:
        Player(std::string name);

        std::string getName();

        Card drawCard();

        int stacksize();

        int cardesTaken();

        // Function to add cards to the player's winnings
        void addCards(std::vector<Card> cards);

        // Function to compare the cards of two players
        bool hasHigherCardThan(const Player& other) const;
    };

}

#endif //INC_2TASK_PLAYER_HPP
