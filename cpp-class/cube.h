#pragma once //This is our interface (.h file) we will implement it in (.cpp file)
//As this is a header file it only includes DECLARATIONS only and not implementation
//#pragma once is always present in .h files to instruct the compiler to only compile the code once
namespace uiuc
{
    class cube
    {
        double length_;

    public:
        double getVolume();
        double getSurfaceArea();
        void setLength(double length);
    };
}
