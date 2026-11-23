//
// Created by Kely Gbedemah on 11/22/26.
//

#ifndef CARPETCALCULATOR_ROOMCARPET_H
#define CARPETCALCULATOR_ROOMCARPET_H

#include "RoomDimension.h"

class RoomCarpet {
    private:
    RoomDimension room;
    double costPerSquareFoot;
    public:
    RoomCarpet( const RoomDimension& room, double price );
    double getTotalCost() const;

};

#endif //CARPETCALCULATOR_ROOMCARPET_H
