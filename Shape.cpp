//
// Created by clane on 21.03.2024.
//

#include "Shape.h"

Shape::Shape(Pos2D pos, const std::string& color) : pos(pos), color(color) {
    std::cout << "Calling Shape::Shape(" << pos << "," << color << ")" << std::endl;
};

Shape::~Shape() {
    std::cout << "Calling Shape::~Shape()" << std::endl;
};