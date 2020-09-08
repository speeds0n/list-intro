#include <iostream>

void filter(int *first, int *last);

int main(){

  int vet[] = {-2, -8, 6, 7, -3, 10, 1, 0, -3, 7};
  int vet_2[] = {2, 8, 6, 7, 3, 10, 1, 1, 3, -7};
  int vet_3[] = {-1, -2, -3};
  int vet_4[] = {-1, 2, -3};
  int vet_5[] = {1, -2, 3};
  int vet_6[] = {0, 0, 1, 0};

  filter(&vet[0], &vet[sizeof(vet)/sizeof(vet[0])]);
  filter(&vet_2[0], &vet_2[sizeof(vet_2)/sizeof(vet_2[0])]);
  filter(&vet_3[0], &vet_3[sizeof(vet_3)/sizeof(vet_3[0])]);
  filter(&vet_4[0], &vet_4[sizeof(vet_4)/sizeof(vet_4[0])]);
  filter(&vet_5[0], &vet_5[sizeof(vet_5)/sizeof(vet_5[0])]);
  filter(&vet_6[0], &vet_6[sizeof(vet_6)/sizeof(vet_6[0])]);

  return 0;
}

void filter(int *first, int *last){
  int *current = first;
  int *v = first;
  int aux;
  while(current != last){

    if(*current > 0){
      aux = *current;
      *current = *v;
      *v = aux;
      v++;
    }
    current++;

  }
  last = v;
  while(first != last){
    std::cout << *first << " ";
    first++;
  }
  std::cout << std::endl;
}
