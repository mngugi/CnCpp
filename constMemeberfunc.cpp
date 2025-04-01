#include <iostream>
using namespace  std;

class Rectangle {
private:
    int breadth, length;
public:
    Rectangle(int length, int breadth){
        this->breadth = breadth;
        this->length = length;


    }

    // const member function

    int get_area() const {
        return length * breadth;
    }

    int get_perimeter() {
        return 2 (length + breadth);
    }

    // non-const member function
};


    