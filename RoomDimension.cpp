//
// Created by Kely Gbedemah on 11/22/26.
//

#include "RoomDimension.h"

RoomDimension::RoomDimension(const FeetInches& length, const FeetInches& width)
    : length(length), width(width) {
}

double RoomDimension::getArea() const {
    return length * width;
}