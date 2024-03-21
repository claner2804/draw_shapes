//
// Created by clane on 21.03.2024.
//

#ifndef DRAW_SHAPES_TRIANGLE_H
#define DRAW_SHAPES_TRIANGLE_H

#include "Shape.h"

class Triangle : public Shape{
protected:
    float a, b, c;
public:
    Triangle(Pos2D pos, const std::string& color, float a, float b, float c);


    //override is telling the compiler that we are overriding
    //the draw method from the base class and not creating a new one
    void draw(std::ostream& out) override;

    ~Triangle() override {}

};


#endif //DRAW_SHAPES_TRIANGLE_H
