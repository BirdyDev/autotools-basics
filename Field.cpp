//
// Created by Sebastian on 04.06.2020.
//

#include "Field.h"

double Field::countRectangleField(double length, double height) {
    return length*height;
}

double Field::countCuboidField(double length, double width, double height) {
    return 2 * ((length * width) + (length * height) + (width * height));
}