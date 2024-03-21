//
// Created by clane on 21.03.2024.
//

#ifndef DRAW_SHAPES_POS2D_H
#define DRAW_SHAPES_POS2D_H

#include <iostream>


class Pos2D {

friend std::ostream& operator<<(std::ostream& out, const Pos2D& pos);

private:
    float x;
    float y;

public:
    //default constructor
    Pos2D() : x(0.0), y(0.0) {}

    //constructor with parameters
    Pos2D(float x, float y) : x(x), y(y) {}

    //destructor virtual because we will have a derived class
    virtual ~Pos2D() {}


    //getter and setter (can be in header file because they are simple)
    float getX() const {
        return x;
    }

    void setX(float x) {
        Pos2D::x = x;
    }

    float getY() const {
        return y;
    }

    void setY(float y) {
        Pos2D::y = y;
    }


};

//overloading the << operator
std::ostream& operator<<(std::ostream& out, const Pos2D& pos);


#endif //DRAW_SHAPES_POS2D_H
