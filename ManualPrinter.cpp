#include <iostream>
#include "ColorCode.h"
#include "ManualPrinter.h"

namespace TelCoColorCoder
{
    void PrintColorCodeManual() {
        std::cout << "------ Telecom Color Code Manual ------\n";
        for (int pairNumber = 1; pairNumber <= numberOfMajorColors * numberOfMinorColors; ++pairNumber) {
            ColorPair colorPair = GetColorFromPairNumber(pairNumber);
            std::cout << pairNumber << " : " << colorPair.ToString() << "\n";
        }
        std::cout << "---------------------------------------\n";
    }
}
