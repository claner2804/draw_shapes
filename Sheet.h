//
// Created by clane on 21.03.2024.
//

#ifndef DRAW_SHAPES_SHEET_H
#define DRAW_SHAPES_SHEET_H

#include <iostream>
//dynamic list that allows us to safe different shapes
#include <vector>


//forward declaration
class Shape;

class Sheet {

private:

    //dynamic list of shapes
    std::vector<Shape*> shapes;

public:

    virtual ~Sheet();

    //polymporphic method that draws all shapes
    //shape is base class, we can give circle, rectangle, triangle etc.
    void add(Shape* shape);


    void draw(std::ostream& out = std::cout);


};


#endif //DRAW_SHAPES_SHEET_H
