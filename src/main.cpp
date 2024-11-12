#include <iostream>
// #include <my_dep.h>
#include <my_dep/my_dep.h>

int main()
{
    int dataFromDependency = my_dep::GetNumber();
    std::cout << "The number is " << dataFromDependency << std::endl;
    return 0;
}
