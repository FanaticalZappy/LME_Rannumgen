#include <iostream>
#include <vector>

int main()
{

    double r = 3.7;
    double x[99999];

    x[0] = 0.9;
    std::vector<int> log;

    for (int i  = 0; i < 1000000; ++i)
    {
        x[i+1] = r * (x[i] * (1 - x[i]));
        log.push_back ((int) (x[i] * 100));
        std::cout << log[i] << "\n";
    }
}
// The logistic map equation shows how a population changes depending on a few values: growth-rate (r), population capacity (x), starvation (1 - x).
// When the growth rate is beyond 3.56995, chaos ensues.
// This equation was one of the first methods of generating random numbers on computers.