#include <iostream>
#include <vector>
#include <tuple>
#include <modern/lib.hpp>
#include <EmbeddedOs/foo.hpp>
#include <fmt/format.h>

int main()
{
    std::vector<double> input = {0.2, 0.3, 1, 1.2};

    auto [mean, moment] = accumulate_vector(input);

    fmt::print("Mean: {}, Moment: {}\n",  mean, moment);
    int a = 5;
    int b = 7;
    fmt::print("The sume of {} and {} is {}\n", a, b, sum(a, b));
    return 0;
}