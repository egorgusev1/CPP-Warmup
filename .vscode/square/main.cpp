#include "square.h"
#include <iostream>

int main()
{
    std::cout << "A square has " << getSquareSides() << " sides\n";
    std::cout << "A square of length 5 has a perimeter of " << getSquarePerimeter(5) << "\n";

    return 0;
}