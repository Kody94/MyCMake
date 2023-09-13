#include <iostream>
#include <vector>
#include <tuple>
#include <fstream>
#include <modern/lib.hpp>
#include <EmbeddedOs/foo.hpp>
#include <fmt/format.h>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

int main()
{
    std::vector<double> input = {0.2, 0.3, 1, 1.2};

    auto [mean, moment] = accumulate_vector(input);

    fmt::print("Mean: {}, Moment: {}\n", mean, moment);
    int a = 5;
    int b = 7;
    fmt::print("The sum of {} and {} is {}\n", a, b, sum(a, b));

    fmt::print("The sum from json of {} and {} is {}\n", a, b, sumFromJson());

    std::ifstream f("example.json");
    json data = json::parse(f);
    int c = data["a"];
    int d = data["b"];
    int product = c * d;
    fmt::print("The product from json of {} and {} is {}\n", c, d, product);
    return 0;
}