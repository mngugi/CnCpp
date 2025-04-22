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
 
     void displayStatus() {
         cout << "Player Status: " << endl;
         cout << "Health: " << health << endl;
         cout << "Score: " << score << endl;
         cout << "Level: " << level << endl;
     }
 };
 
 int main() {
     Player player;
 
     // Display initial status
     player.displayStatus();
 
     // Simulate changes to the player's attributes
     player.takeDamage(30);
     player.increaseScore(50);
     player.levelUp();
 
     // Display updated status
     player.displayStatus();
 
     return 0;
 }