#include "cube.h"
#include <iostream>

int main()
{
    uiuc::cube c;
    c.setLength(2.4);
    double volume = c.getVolume();
    std::cout << "Volume: " << volume << std::endl;

    double surfaceArea = c.getSurfaceArea();
    std::cout << "Surface Area: " << surfaceArea << std::endl;

    return 0;
}