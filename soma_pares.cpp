#include <iostream>

int main(){

  int value{0}, sum{0};
  int result{0};

  std::cin >> value >> sum;

  for(int i{0}; i < sum;i++){
    result = result+(value + i);
  }

  std::cout << result;

  return 0;
}
