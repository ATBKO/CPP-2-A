// Created by koazg on 21/03/2023.

#ifndef EX2_CARD_HPP
#define EX2_CARD_HPP

#include <string>

namespace ariel {
    class Card {
    public:
        // Constructor
        enum class Shape {
            SPADES,
            HEARTS,
            CLUBS,
            DIAMONDS
        };
        Shape shape;
        int value;  // 1-13 representing Ace-King

        Card(int val, Shape shape) : value(val), shape(shape) {}

        // Getters
        int getValue() const { return value; }

        Shape getShape() const { return shape; }

        // Standalone function
        std::string to_string() const {
            switch (this->shape) {
                case Shape::HEARTS:
                    return "Hearts";
                case Shape::DIAMONDS:
                    return "Diamonds";
                case Shape::CLUBS:
                    return "Clubs";
                case Shape::SPADES:
                    return "Spades";
                default:
                    return "unknown";
            }
        }
    };


}

#endif //EX2_CARD_HPP
