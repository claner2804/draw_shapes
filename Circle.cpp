//
// Created by clane on 21.03.2024.
//

#include "Circle.h"



void Circle::draw(std::ostream &out) {
    out << "Drawing circle at " << pos << " with color " << color << " and radius " << r << std::endl;
}

Circle::~Circle() {
    std::cout << "Calling Circle::~Circle()" << std::endl;
}