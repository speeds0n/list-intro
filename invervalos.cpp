#include <iostream>

int main(){

	int value{0}, total{0};
	int interval[4]{0};

	while(std::cin >> value){

		if(value >= 0 and value < 25) interval[0] += 1;
		else if(value >= 25 and value < 50) interval[1] += 1;
		else if(value >= 50 and value < 75) interval[2] += 1;
		else if(value >= 75 and value <= 100) interval[3] += 1;

		total += 1;
	}
	std::cout <<"values between [0 and 25) = "<< (interval[0]* 100)/ total << "%" << std::endl;
	std::cout <<"values between [25 and 50) = "<< (interval[1]* 100)/ total << "%" << std::endl;
	std::cout <<"values between [50 and 75) = "<< (interval[2]* 100)/ total << "%" << std::endl;
	std::cout <<"values between [75 and 100] = "<< (interval[3]* 100)/ total << "%" << std::endl;

	return 0;
}
