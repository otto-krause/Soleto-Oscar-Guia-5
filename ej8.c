// Ejercicio 8
#include <stdio.h>
int main(){
  int positivo = 0, cero = 0, negativo = 0;
  int input;
  for(int i = 1; i < 11; i++){
    scanf("%d", &input);
    if (input > 0){
      positivo++;
    }
    else if (input < 0){
      negativo++;
    }
    else {
      cero++;
    }
  }
  printf("Hay %d positivos, %d negativos y %d ceros\n", positivo, negativo, cero);
  return 0;
}
