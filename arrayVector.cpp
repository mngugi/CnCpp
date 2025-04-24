#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {

    std::vector<int> numbers(5);

    for (int i = 0; i < 5; ++i){
        numbers[i] = std::rand() % 100;
        cout << "Numbers " << i << ";" << numbers[i] << endl;

    }

    numbers.push_back(0);
    return 0;
}