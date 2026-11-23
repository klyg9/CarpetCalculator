//
// Created by Kely Gbedemah on 11/22/26.
//

#ifndef CARPETCALCULATOR_ROOMDIMENSION_H
#define CARPETCALCULATOR_ROOMDIMENSION_H

#include "FeetInches.h"

class RoomDimension {
    private:
    FeetInches length;
    FeetInches width;
public:
    RoomDimension(const FeetInches& length, const FeetInches& width);
    double getArea() const;
};

#endif //CARPETCALCULATOR_ROOMDIMENSION_H


