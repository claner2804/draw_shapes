//
// Created by clane on 21.03.2024.
//

#include "Triangle.h"

Triangle::Triangle(Pos2D pos, const std::string &color, float a, float b, float c) :
    Shape(pos, color), a(a), b(b), c(c) {
    std::cout << "Calling Triangle::Triangle(" << pos << "," << color << "," << a << "," << b << "," << c << ")" << std::endl;
}

void Triangle::draw(std::ostream &out) {
    out << "Drawing triangle at " << pos << " with color " << color << std::endl;

}
