#include <iostream>
#include <cmath>
using namespace std;
int check_int_type(int, int);

int main() {
	// your code goes here
	bool pyth_tri_finder = false;
	for (int a = 1; a < 500; a++){
	    for (int b = 1; b < 500; b++){
	        pyth_tri_finder = false;
	        int c = check_int_type(a,b);
	        if (check_int_type(a,b) != 0){
	            //cout << "Pythagorean triplet: " << "a: " << a << ", b: " << b << ", and c: " << c << endl;
	            
	            if ( (a + b + c) == 1000){
	                cout << "Special Pythagorean triplet: " << "a: " << a << ", b: " << b << ", and c: " << c << endl;
	                cout << (a*b*c) << endl;
	            }
	            
	        }
	    }
	}

	
	return 0;
}

int check_int_type(int a, int b){
    bool int_type = false;
    
    double ab_combination = sqrt(pow(a,2.0)+pow(b,2.0));
    int round_down = (int) ab_combination;
    
    if (ab_combination - round_down == 0){
        return round_down;
    } else {
        return 0;
    }

    
}
