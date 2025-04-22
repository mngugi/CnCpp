#include <iostream>
 #include <string>
 using namespace std;

 /**
  * Changes to objects should happen exclusively through class functions. This
  * makes your code easier to organize and easier for others to understand.
  * Imagine you are going to create a class that keeps track of a meal. In this 
  * case, a meal can be thought of as all of the drinks, appetizers, courses, and
  * desserts served. Each one of these categories will become a class variable
  * (attribute). Assign each attribute a vector of strings. Remember, class
  * variables/attribute are private.
  */

 class Meal() {
    private:
        vector < string> drinks;
        vector < string> appetizers;
        vector < string> mainCourses;
        vector < string> desserts;
        vector < string> sides;
        vector < string> salads;
        vector < string> soups;
        vector < string> breads;
        vector < string> sauces;
        vector < string> garnishes;
        vector < string> condiments;            
 }