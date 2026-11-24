#include <iostream>
#include <iomanip>
#include "RoomCarpet.h"

int main() {
    int lengthFeet, lengthInches;
    int widthFeet, widthInches;
    double carpetPrice;

    std::cout << "Enter room length (feet): ";
    std::cin >> lengthFeet;

    std::cout << "Enter room length (inches): ";
    std::cin >> lengthInches;

    std::cout << "Enter room width (feet): ";
    std::cin >> widthFeet;

    std::cout << "Enter room width (inches): ";
    std::cin >> widthInches;

    std::cout << "Enter carpet price per square foot: $";
    std::cin >> carpetPrice;


    if (!std::cin ||
        lengthFeet < 0 || lengthInches < 0 ||
        widthFeet < 0 || widthInches < 0 ||
        lengthInches >= 12 || widthInches >= 12 ||
        (lengthFeet == 0 && lengthInches == 0) ||
        (widthFeet == 0 && widthInches == 0)) {

        std::cerr << "Error: Invalid room measurements." << std::endl;
        return 1;
        }

    if (carpetPrice < 0 ) {
        std::cerr << "Error: Carpet price must be greater than zero."
        << std::endl;
        return 1;
    }

    FeetInches roomLength(lengthFeet, lengthInches);
    FeetInches roomWidth(widthFeet, widthInches);

    RoomDimension room(roomLength, roomWidth);
    RoomCarpet carpet(room, carpetPrice);


    std::cout << std::fixed << std::setprecision(2);

    std::cout << "\nRoom length: " << roomLength << std::endl;
    std::cout << "Room width: " << roomWidth << std::endl;

    std::cout << "Room area: " << room.getArea()
              << " square feet" << std::endl;

    std::cout << "Carpet price: $" << carpetPrice
              << " per square foot" << std::endl;

    std::cout << "Total carpet cost: $"
              << carpet.getTotalCost() << std::endl;


    std::cout << "Carpet Calculator Project" <<std::endl;


    FeetInches original(5, 6);
    FeetInches copied(original);

    copied.setFeet(8);

    std::cout << "Original: " << original << std::endl;
    std::cout << "Copy: " << copied << std::endl;


    FeetInches testLength(5, 6);
    FeetInches testWidth(4, 3);

    double testArea = testLength * testWidth;

    std::cout << "Multiplication test: "
              << testArea << " square feet" << std::endl;



    return 0;
}
