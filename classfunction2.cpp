#include <iostream>
#include <string>
#include <vector> // Include vector library
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

// Remove the incorrect class declaration
// class Meal() { ... }

class Meal {
    public:
        void addDrink(string drink) {
            drinks.push_back(drink);
        }
        void addAppetizer(string appetizer) {
            appetizers.push_back(appetizer);
        }
        void addMainCourse(string mainCourse) {
            mainCourses.push_back(mainCourse);
        }
        void addDessert(string dessert) {
            desserts.push_back(dessert);
        }
        void addSide(string side) {
            sides.push_back(side);
        }
        void addSalad(string salad) {
            salads.push_back(salad);
        }
        void addSoup(string soup) {
            soups.push_back(soup);
        }
        void addBread(string bread) {
            breads.push_back(bread);
        }
        void addSauce(string sauce) {
            sauces.push_back(sauce);
        }
        void addGarnish(string garnish) {
            garnishes.push_back(garnish);
        }
        void addCondiment(string condiment) {
            condiments.push_back(condiment);
        }
        void printDrinks() {
            cout << "Drinks: " << endl;
            for (const string& drink : drinks) {
                cout << "- " << drink << endl;
            }
        }
        void printAppetizers() {
            cout << "Appetizers: " << endl;
            for (const string& appetizer : appetizers) {
                cout << "- " << appetizer << endl;
            }
        }
        void printMainCourses() {
            cout << "Main Courses: " << endl;
            for (const string& mainCourse : mainCourses) {
                cout << "- " << mainCourse << endl;
            }
        }       
        void printDesserts() {
            cout << "Desserts: " << endl;
            for (const string& dessert : desserts) {
                cout << "- " << dessert << endl;
            }
        }
        void printSides() {
            cout << "Sides: " << endl;
            for (const string& side : sides) {
                cout << "- " << side << endl;
            }
        }
        void printSalads() {
            cout << "Salads: " << endl;
            for (const string& salad : salads) {
                cout << "- " << salad << endl;
            }
        }
        void printSoups() {
            cout << "Soups: " << endl;
            for (const string& soup : soups) {
                cout << "- " << soup << endl;
            }
        }
        void printBreads() {
            cout << "Breads: " << endl;
            for (const string& bread : breads) {
                cout << "- " << bread << endl;
            }
        }
        void printSauces() {
            cout << "Sauces: " << endl;
            for (const string& sauce : sauces) {
                cout << "- " << sauce << endl;
            }
        }
        void printGarnishes() {
            cout << "Garnishes: " << endl;
            for (const string& garnish : garnishes) {
                cout << "- " << garnish << endl;
            }
        }
        void printCondiments() {
            cout << "Condiments: " << endl;
            for (const string& condiment : condiments) {
                cout << "- " << condiment << endl;
            }
        }
    private:
        vector<string> drinks;
        vector<string> appetizers;
        vector<string> mainCourses;
        vector<string> desserts;
        vector<string> sides;
        vector<string> salads;
        vector<string> soups;
        vector<string> breads;
        vector<string> sauces;
        vector<string> garnishes;
        vector<string> condiments;    
};

// Main function
int main() {
    Meal meal;
    meal.addDrink("Water");
    meal.addDrink("Soda");
    meal.addAppetizer("Salad");
    meal.addMainCourse("Steak");
    meal.addDessert("Ice Cream");
    meal.addSide("Fries");
    meal.addSalad("Caesar Salad");
    meal.addSoup("Tomato Soup");
    meal.addBread("Garlic Bread");
    meal.addSauce("BBQ Sauce");
    meal.addGarnish("Parsley");
    meal.addCondiment("Ketchup");

    // Print all items in the Meal object
    meal.printDrinks();
    meal.printAppetizers();
    meal.printMainCourses();
    meal.printDesserts();
    meal.printSides();
    meal.printSalads();
    meal.printSoups();
    meal.printBreads();
    meal.printSauces();
    meal.printGarnishes();
    meal.printCondiments();

    return 0;
}