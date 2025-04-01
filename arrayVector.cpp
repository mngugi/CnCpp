#include <iostream>
#include <vector>
#include <cstdlib>

int main() {

    std::vector<int> numbers(5);

    for (int i = 0; i < 5; ++i){
        numbers[i] = std::rand() % 100;

    }

    numbers.push_back(0);
    return 0;
}