#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

int main() {
    std::vector<std::string> colours{"red", "green", "white", "blue", "orange", "green", "orange", "black", "purple"};
    // gebruik functies uit <algorithm> en <functional> om (steeds vanuit een ORIGINELE copie van deze vector)
    // 1) de vector in 2 nieuwe vectoren te splitsen: 1 met alles wat alfabetisch voor 'purple' komt, 1 met alles er na
    std::sort(colours.begin(), colours.end());
    std::size_t untilPurple = 0;
    for (int i = 0; i < colours.size(); ++i) {
        untilPurple = i;
    }
    std::vector<int> split_lo(colours.begin(), colours.begin() + untilPurple);
    std::vector<int> split_hi(colours.begin() + untilPurple, colours.end());
    std::cout << "all before purple" << std::endl;
    for (auto a : split_lo) {
        std::cout << a << std::endl;
    }
    std::cout << "all after purple" << std::endl;
    for (auto a : split_hi) {
        std::cout << a << std::endl;
    }

    {
        std::vector<std::string> colours{"red", "green", "white", "blue", "orange", "green", "orange", "black", "purple"};
        // 2) alle elementen UPPERCASE te maken.
        for (auto a : colours){
            std::transform(a.begin(), a.end(),a.begin(), ::toupper);
            std::cout << a << std::endl;
        }
    }
    {
        std::vector<std::string> colours{"red", "green", "white", "blue", "orange", "green", "orange", "black", "purple"};
        // 3) alle dubbele te verwijderen
        std::sort(colours.begin(), colours.end());
        colours.erase(unique(colours.begin(), colours.end()), colours.end());
        for (auto a : colours){
            std::cout << a << std::endl;
        }

    }

    // gebruik functies uit <algorithm> en <functional> om (steeds vanuit een ORIGINELE copie van deze vector)
    {
        std::vector<double> numbers{10, 324422, 6, -23, 234.5, 654.1, 3.1242, -9.23, 635};
        // 1) alle negatieve elementen te verwijderen
        auto it = remove_if(numbers.begin(), numbers.end(),  [](const int i) {return i < 0; });
        numbers.erase(it, numbers.end());
        for (auto a : numbers){
            std::cout << a << std::endl;
        }
    }

    {
        std::vector<double> numbers{10, 324422, 6, -23, 234.5, 654.1, 3.1242, -9.23, 635};
        // 2) voor alle elementen te bepalen of ze even of oneven zijn
        for (auto a : numbers) {
            int i = (int)a;
            if (i % 2 != 0){
                std::remove(numbers.begin(), numbers.end(), a);
            }
        }
        for (auto a : numbers){
            std::cout << a << std::endl;
        }
    }

    {
        std::vector<double> numbers{10, 324422, 6, -23, 234.5, 654.1, 3.1242, -9.23, 635};
        // 3) de som, het gemiddelde, en het product van alle getallen te berekenen
        int gem = std::accumulate(numbers.begin(), numbers.end(), 0) / numbers.size();
        std::cout << "gemiddelde is: " << gem << std::endl;
    }

    return 0;
}
