
/**
 * Functions to return ints, doubles, strings,and vectors. 
 * parameter i as the first integer
 * parameter j as th second integer
 * return sum(i,j)
 * 
 */

 #include <iostream>
 using namespace std;

 int ReturnSum( int i, int j){
    return(i + j);

 }

 int ReturnDouble(double i , double j){
    return(i + j);

 }

 int Returnstring(string i, string j){
    return(i + j);

 }


int main() {

   cout <<  ReturnSum(9 , 8) << endl;
   cout <<  ReturnDouble( 1.2 , 3.5) << endl;
   cout <<  Returnstring("10","36") << endl;

    return 0 ;
}