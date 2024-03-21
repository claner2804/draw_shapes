//
// Created by clane on 21.03.2024.
//

#ifndef DRAW_SHAPES_SHAPE_H
#define DRAW_SHAPES_SHAPE_H

#include "Pos2D.h"
#include <string>
#include <iostream>


class Shape {

    //protected because it will be inherited
protected:
    Pos2D pos;
    std::string color;

public:
    //default constructor
    Shape();

    //constructor with parameters
    Shape(Pos2D pos, const std::string& color);

    virtual ~Shape();

    //dynamic binding for draw method
    //draw method not implemented in shape class because
    //it will be changed in derived classes that is why =0
    virtual void draw(std::ostream& out) = 0;

};


#endif //DRAW_SHAPES_SHAPE_H
