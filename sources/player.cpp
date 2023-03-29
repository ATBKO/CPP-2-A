#include "player.hpp"
#include <stdexcept>
#include "card.hpp"

using namespace ariel;

Player::Player(std::string name) : name(name), cardsTaken(0) {
    this->name=name;
}

int Player::stacksize(){
    return hand.size();
}

Card Player::drawCard() {
    if (hand.empty()) {
        throw std::out_of_range("The player's hand is empty!");
    }
    Card c = hand.back();
    hand.pop_back();
    return c;
}

void Player::addCards(std::vector<Card> cards) {
    for (const auto& card : cards) {
        hand.push_back(card);
    }
    cardsTaken += cards.size();
}

bool Player::hasHigherCardThan(const Player& other) const {
    return this->hand.back().getValue() > other.hand.back().getValue();
}

int Player::cardesTaken(){
    return cardsTaken;
}

std::string Player::getName() {
    return name;
}
