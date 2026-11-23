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

    std::cout << "Carpet Calculator Project" <<std::endl;
    return 0;
}
