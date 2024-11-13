#include <iostream>
#include <my_dep/my_dep.h>

#include "consumer_logic.h"


int main() {
    int dataFromDependency = my_dep::GetNumber();
    int ourNumber = CalculateOurNumber(dataFromDependency);

    std::cout
        << "The number is "
        << ourNumber
        << std::endl;

    return 0;
}
