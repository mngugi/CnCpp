#include <iostream>
using namespace std;
/**
 * make a class for a circle
 * class circle represents a geeometric circle. 
 */
class Circle
{
private:
    /* data */
    /*Constant value of PI used in area calculation.*/
    const double PI = 3.141592653589793;
    int radius; /*radius of a circle*/

public:

    Circle(int radius){
        this->radius=radius ;

    }

    /**
     * Calculates and returns the area of the circle.
     * 
     * The area of the circle as a double.
     */
   /**
    *  Main function to demonstrate the Circle class.
    * 
    *  int Exit code.
 */
int get_area() const {
    return PI * radius * radius ;
}    

};

int main(){
    Circle circle(7);
    cout << "Area of a Circle is : " << circle.get_area() << endl;

}