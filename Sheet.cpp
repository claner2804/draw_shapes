//
// Created by clane on 21.03.2024.
//

#include "Sheet.h"
#include "Shape.h"


//that shape obejts can be valid through the whole program
//we need to create them in the heap
//when creating them in the heap we need to delete them manually in the end
//otherwise there would be a memory leak
Sheet::~Sheet() {
    for (auto shape : shapes) {
        delete shape;
    }
}

void Sheet::add(Shape *shape) {
    shapes.push_back(shape);
}

void Sheet::draw(std::ostream &out) {
    for (auto shape : shapes) {
        shape->draw(out);
    }
}


