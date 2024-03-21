#include <iostream>
#include <vector>
#include "Shape.h"
#include "Triangle.h"
#include "Pos2D.h"
#include "Sheet.h"


int main() {

    //create an Object of sheet class
    Sheet sheet;

    //add triangles to the sheet
    sheet.add(new Triangle(Pos2D(1, 1), "black", 1, 2, 3));
    sheet.add(new Triangle(Pos2D(3, 4), "red", 5, 6, 7));

    //draw the sheet
    sheet.draw();


    return 0;
}
