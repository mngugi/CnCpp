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

 /**
  * The class should have a constructor that initializes all of the vectors to
  * empty. The class should also have a function that allows you to add an item
  * to any of the vectors. The function should take two parameters: the name of
  * the vector and the name of the item to be added. The function should return
  * true if the item was added successfully and false if it was not.
  * Next, add a class function to add a drink to the Meal object. Use the
  * push_back function to add an element to the vector. So 
  * drinks.push_back(drink) adds the drink drink to the vector drinks. Then
  * add a class function PrintDrinks to print out all of the elements inside the
  * drinks vector. Class functions are public
  */