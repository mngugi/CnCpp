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
        this->radius=radius ;

    }

int get_area() const {
    return PI * radius^2 ;
}    


};

int main(){
    const Circle RECT = radius(7);
    cout << "Area of a Circle is : " << RECT.get_area() << endl;

}