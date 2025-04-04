#include <iostream>
using namespace std;

class Circle
{
private:
    /* data */
    const double PI = 3.141592653589793;
    int radius; 

public:
    Circle(int radius){
        this->radius=radius ;

    }

int get_area() const {
    return PI * radius * radius ;
}    

};

int main(){
    Circle circle(7);
    cout << "Area of a Circle is : " << circle.get_area() << endl;

}