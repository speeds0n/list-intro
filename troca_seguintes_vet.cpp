#include <iostream>

int main(){

  int vet[20]{0};
  int i{0}, aux{0};

  for(i = 0;i < 20; i++){
    std::cin >> vet[i];
  }
  for(i = 0;i < 20; i++){
    std::cout << vet[i] << " ";
  }
  std::cout << std::endl;

  for(i = 0;i < 19; i++){
    if(vet[i] % 2 == 1 && vet[i+1] % 2 == 0){
      aux = vet[i];
      vet[i] = vet[i+1];
      vet[i+1] = aux;
    }
  }

  for(i = 0;i < 20; i++){
    std::cout << vet[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
