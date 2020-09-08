#include <iostream>

int main(){
  int vet[20];
  int i{0}, aux{0};

  for(i = 0;i < 20; i++){
    std::cin >> vet[i];
  }
  std::cout << "Normal Vector" << std::endl;
  for(i = 0;i < 20; i++){
    std::cout << vet[i] << " ";
  }
  for(i = 0;i<(20/2);i++){
    aux = vet[i];
    vet[i] = vet[19-i];
    vet[19-i] = aux;
  }
  std::cout << "\nInvet Vector" << std::endl;
  for(i = 0; i < 20; i++){
    std::cout << vet[i] << " ";
  }
	return 0;
}
