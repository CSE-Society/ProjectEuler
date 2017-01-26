//Website - https://projecteuler.net/archives

//Author: Alex

//Question 9:
//A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
//a2 + b2 = c2
//For example, 32 + 42 = 9 + 16 = 25 = 52.
//There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//Find the product abc.

#include <iostream>
#include <cmath>
using namespace std;

//prototype for checking if the 'c' value is a positive integer
int check_int_type(int, int);

int main() {
	
   //boolean for checking if a special pythagorean triplet is found
   bool pyth_tri_finder;
	
   //for loop for interating through the positive integers ranging from 1 to 500
   for (int a = 1; a < 500; a++){
      for (int b = 1; b < 500; b++){
      //setting the pythagorean triplet finder to false to account for changing the boolean to true indefinitely
      pyth_tri_finder = false;
      //int c if a special pythagorean triplet is found
      int c = check_int_type(a,b);
      //if the variable c is not 0 (meaning the variable c is one of the pythagorean triplets
      //checking for conditions a < b < c
         if (c != 0 && (a < b) && (b < c)){
            //checking for conditions
            if ( (a + b + c) == 1000){
               cout << "Special Pythagorean triplet: " << "a: " << a << ", b: " << b << ", and c: " << c << endl;
               cout << (a*b*c) << endl;
            } 
         }
      }
   }
   return 0;
}

//Name: check_int_type
//Description: Method that checks if the input variables 'a' and 'b' would form a pythagorean triplet
//return value of '0' indicates that no pythagorean triplet was found from the input variables 'a' and 'b'
int check_int_type(int a, int b){
   bool int_type = false;
    
   double c = sqrt(pow(a,2.0)+pow(b,2.0));
   int round_down = (int) c;
    
   //checking if the variable 'c' is a positive integer
   if (c - round_down == 0){
      return round_down;
   } else {
      return 0;
   }

    
}
