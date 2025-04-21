
/**
 * Objects are mutable, which means that objects (specifically their attributes)
 * can change value. Think of a video game; the main character in the game is
 * constantly changing.
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
        score = 0 ;
        level = 1;
    }
        
 };