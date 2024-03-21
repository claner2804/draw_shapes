//
// Created by clane on 21.03.2024.
//

#include "Pos2D.h"

//overloading the << operator
std::ostream& operator<<(std::ostream& out, const Pos2D& pos) {
    out << "(" << pos.getX() << ", " << pos.getY() << ")";
    return out;
}
