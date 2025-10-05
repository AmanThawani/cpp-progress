#include <iostream>
#include <vector>
#include <string>
#include <numeric>

int main() {
    int x = 0;
    int N = 999;
    std::vector<int> v(N);
    std::iota(v.begin(), v.end(), 0);

    for (int i : v) {
        int j = 1 + i;
        if (j % 3 == 0) {
            x += j;
        }
        if (j % 5 == 0){
            x += j;
        }
        if (j % 15 == 0){
            x -= j;
        }
    }

    std::cout << x;

    return 0;
}