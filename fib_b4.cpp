#include <iostream>

int main(){

  int fib_1{1}, fib_2{1};
  int n{0};
  int result{0};

  std::cin >> n;
  std::cout << fib_1 << " " << fib_2 << " ";

  while(result < n){
    result = fib_1 + fib_2;
    if(result <= n) std::cout << result << " ";
    fib_1 = fib_2;
    fib_2 = result;
  }

  return 0;
}
