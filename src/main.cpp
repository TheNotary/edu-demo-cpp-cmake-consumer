#include <iostream>
#include <my_dep/my_dep.h>

int CalculateOurNumber(int theirNumber) {
    return theirNumber + 100;
}

int main() {
    int dataFromDependency = my_dep::GetNumber();
    int ourNumber = CalculateOurNumber(dataFromDependency);

    std::cout
        << "The number is "
        << ourNumber
        << std::endl;

    return 0;
}
