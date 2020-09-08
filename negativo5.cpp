#include <iostream>

int main(){

	int value{0}, count{0};

	for(int i{0}; i<5; i++){

		std::cin >> value;

		if(value < 0) count += 1;
	}
		std::cout << count << std::endl;
	
	return 0;
}
