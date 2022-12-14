//Worker Problem Solving Program
#include <iostream>
#include <cfloat>

int main()
{
    int worker;
    float time, result;

    std::cout << "Welcome to the Worker Problem Solving Program :)" << std::endl;

    std::cout << "" << std::endl;
    std::cout << "The day it takes a worker to do the job that needs to be done?" << std::endl;
    std::cin >> time;

    std::cout << "" << std::endl;
    std::cout << "How many workers will do the work to be done?" << std::endl;
    std::cin >> worker;

    result = time / worker;

    std::cout << "" << std::endl;
    std::cout << worker << " workers do this job in " << result << " days.";

    return 0;
}
