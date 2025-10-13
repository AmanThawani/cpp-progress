// Use Monte Carlo simulation to find EV of min of 2 dice rolls
// Track different situations after?

#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()
#include <vector>
#include <numeric>

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    std::vector<int> numsvector = {};

    for (int i = 0; i < 10000000; ++i) {
        int randomNumber = 1 + rand() % 6; // random number between 0 and 99
        int randomNumber2 = 1 + rand() % 6;
        int randomMin = std::min(randomNumber, randomNumber2);
        numsvector.push_back(randomMin);
    }
    int sum = std::accumulate(numsvector.begin(), numsvector.end(), 0);
    int length = numsvector.size();
    double avg = static_cast<double>(sum) / length;
    std::cout << avg;

    return 0;
}