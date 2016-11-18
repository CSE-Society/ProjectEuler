#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	
	int sum = 0;
	for (int num = 0; num < 1000; num++){
		if (num % 3 == 0 || num % 5 == 0){
			sum += num;
		}
	}
	cout << sum;
	
}