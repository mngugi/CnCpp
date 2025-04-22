/**
 * a class was defined as “a collection of data and the actions that can modify the data.”
 * using external functions to modify objects is not a good practice.
 * class functions, also known as class or instance methods, that serve to modify the 
 * data within objects. 
 * Think of a class function as a function that is attached to an object. 
 * The class function is the most common type of function when creating classes.
 * Notice how class functions are declared inside of the class. These functions
 * are called class functions because they have access to the class variables
 * (the attributes declared in the constructor). Class functions are invoked
 * using dot-notation.
 */

 #include <iostream>
 #include <string>
 using namespace std;

    class Player {
        public:
        int health;
        int score;
        int level;
    
        Player() {
            health = 100;
            score = 0;
            level = 1;
        }
    
        void takeDamage(int damage) {
            health -= damage;
            if (health < 0) health = 0;
        }
    
        void increaseScore(int points) {
            score += points;
        }
    
        void levelUp() {
            level++;
        }

        void printPlayer() {
            if(health <= 0){
                cout << "Player is dead." << endl;
            } else {
                cout << "Player Status: " << endl;
                cout << "Health: " << health << endl;
                cout << "Score: " << score << endl;
                cout << "Level: " << level << endl;
            }

        }

        private: //private access modifiers
int health;
int score;
int level;
};
//add class definitions above this line

Player.mario;
mario.PrintPlayer();

