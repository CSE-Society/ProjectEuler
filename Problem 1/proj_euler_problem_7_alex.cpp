#include <iostream>
//alex_lee

using namespace std;
int main(int argc, char *argv[]) {
	
	int prime_count = 0;
	while (prime_count < 10001){
	
		for (int num = 2; num < 200000; num++){
			int repeat_count = 0;
			
			for (int init = 1; init <= num; init++){
				if (num % init == 0){
					repeat_count++;
				}
			}	
		
			if (repeat_count == 2){
				prime_count++;
			}
			
			if (prime_count == 10001){
				cout << "PRIME 10,001st = ";
				cout << num;
				break;
			}
		}
	}
}