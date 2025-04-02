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

    int get_perimeter() const {
        return 2 * (length + breadth);
    }

    // non-const member function // error //RECT.get_perimeter();
    // adding a const at get_perimeter() to change it to const member 
};

int main() {

    // create a const Rectangle object
    const Rectangle RECT = Rectangle(7, 2);
    const Rectangle RECT_PERIM = Rectangle(7, 2);

    // call the const member function
    cout << "Area: " << RECT.get_area() << endl;
    cout << "Perimeter: " << RECT_PERIM.get_perimeter() << endl;
}
    
/**
 * above example, we have created a class Rectangle with the following member functions:
  *get_area() - a constant member function
  *get_perimeter()- a normal member function
  * created a constant object named RECT:
  * create a const Rectangle object
  * const Rectangle RECT = Rectangle(7, 6);
 * 
 */