#include <iostream>
#include <cmath>
#include <vector>

int dotproduct(std::vector<int> v1, std::vector<int> v2)
{ 
    int result = 0;
    for (size_t i = 0; i < v1.size(); ++i) 
    {
        result += v1[i] * v2[i];
    }
    return result;    
}

int main(){
    std::vector<int>w1 = {4, 3};
    std::vector<int>w2 = {3, -10};
    int dp = dotproduct(w1, w2);
    std::cout << dp << std::endl;
    return 0;
}