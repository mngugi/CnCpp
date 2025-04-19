
/***
 * In the text above, the words “class” and “object” are used in an almost
 * interchangeable manner. There are many similarities between classes and
 * objects, but there is also an important difference. Working with objects has
 * a lot of specialized vocabulary
 * Classes - Classes are a collection of data and the actions that can modify the data. 
 * Objects - Objects are constructed according to the blueprint that is the class.
 * Instance - Another way that programmers talk about objects is to say that
 * an object is an instance of a particular class. For example, s is an instance
 * of the string class. [string s = "this is a string";
 * s.length()
 * Instantiation - Instantiation is the process where an object is created
 * according to a blueprint of the class. The phrase “define a variable” means
 * to create a variable. The variable is given a name and a value. Once it has
 * been defined, you can use the variable. With objects, you use the phrase
 * “instantiate an object”. That means to create an object, give it a name, store
 * any data, and define the actions the object can perform.
 */

 #include <iostream>
 #include<string>

 using namespace std;
    // class definition 

    class Actor {
    
   
    public:
         string first_name;
         string last_name;
         string birth_date;
         int age;
         int total_movies;
         int oscar_wins;
         int oscar_naminations;

    Actor () {

        first_name = "Denzel";
        last_name = "Washington";
        birth_date = "December 28, 1954";
        age = 68;
        total_movies= 50;
        oscar_wins = 2;
        oscar_naminations = 10;


       
    
       cout << "The actor is:" << first_name << "" << last_name << endl;
       cout << "Age:" << age << endl;
       cout << "Birth date:" << birth_date << endl;

    }    

    return 0 ;
 };
    
     