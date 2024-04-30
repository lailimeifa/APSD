#include <iostream>

int main() {
    int hasil = 0;

    for (int i = 1; i <= 5; ++i) {
        int deret = 0;
        for (int j = 1; j <= i; ++j) {
            int bilanganGenap = 2 * j;
            deret += bilanganGenap;
            if (j < i) {
                std::cout << bilanganGenap << " + ";
            } else {
                std::cout << bilanganGenap << " = " << deret;
            }
        }
        hasil += deret;
        std::cout << std::endl;
    }

    return 0;
}

