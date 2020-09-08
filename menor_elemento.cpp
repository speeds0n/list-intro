#include <iostream>

int main(){

  int vet[20]{0};
  int i{0}, min{0}, index{0};

    for(i = 0;i < 20; i++){
    std::cin >> vet[i];
  }

  min = vet[0];

  for(i = 0;i < 20; i++){
    std::cout << vet[i] << " ";
 
 /*   std::cout <<"v["<< i+1 <<"]="<< vet[i] << " ";
    if(i % 5 == 0 && i > 0) std::cout << std::endl;*/

    if(vet[i] < min){
      min = vet[i];
      index = i;
    }
  }
  std::cout << "\n"<< min <<" is the smallest value in the index "<< index << std::endl;

  return 0;
}
