#include <iostream>
using namespace std;


class Circle
{
private:
    /* data */
    const double PI = 3.141592653589793;
    int radius; 

public:
    Circle(int radius, double PI){

    }

int get_area() const {
    return PI * radius^2 ;
}    


};

