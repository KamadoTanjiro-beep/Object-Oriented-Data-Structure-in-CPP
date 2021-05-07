#include "cube.h"

//This cpp file is the implementation that was defined in cube.h

namespace uiuc
{
    double cube::getVolume()
    {
        return length_ * length_ * length_;
    }

    double cube::getSurfaceArea()
    {
        return 6 * length_ * length_;
    }

    void cube::setLength(double length)
    {
        length_ = length;
    }
}