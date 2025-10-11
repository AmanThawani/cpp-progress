// Use Monte Carlo simulation to find EV of a dice roll
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
        numsvector.push_back(randomNumber);
    }
    int sum = std::accumulate(numsvector.begin(), numsvector.end(), 0);
    int length = numsvector.size();
    double avg = static_cast<double>(sum) / length;
    std::cout << avg;

    return 0;
}