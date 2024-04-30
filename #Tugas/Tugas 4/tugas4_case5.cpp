#include <iostream>

int main() {
    int n = 5; 
    int sum = 0; 

    for (int i = n; i >= 1; --i) {
        int multiplier = 10; 
        int lineSum = 0;
        for (int j = 0; j < i; ++j) {
            std::cout << multiplier;
            lineSum += multiplier;
            if (j < i - 1) {
                std::cout << " + ";
            }
            multiplier -= 2;
        }
        sum += lineSum;
        std::cout << " = " << lineSum << std::endl;
    }
    std::cout << "----------" << std::endl;
    std::cout << sum << std::endl;

    return 0;
}

