//
// Created by clane on 21.03.2024.
//

#include "Shape.h"

#ifndef DRAW_SHAPES_CIRCLE_H
#define DRAW_SHAPES_CIRCLE_H


class Circle : public Shape {

protected:
    float r;


public:
  Circle(Pos2D pos, const std::string &color, float r) : Shape(pos, color), r(r) {
           std::cout << "Calling Circle::Circle(" << pos << "," << color << "," << r << ")" << std::endl;
    }

    void draw(std::ostream& out) override;

    ~Circle() override ;

};


#endif //DRAW_SHAPES_CIRCLE_H
