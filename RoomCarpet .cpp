//
// Created by Kely Gbedemah on 11/22/26.
//

#include "RoomCarpet.h"

RoomCarpet::RoomCarpet(const RoomDimension& room, double price)
    : room (room), costPerSquareFoot (price) {
}
double RoomCarpet::getTotalCost() const {
    return room.getArea()*costPerSquareFoot;
}