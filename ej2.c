// Ejercicio 2
#include <stdio.h>
int main(){
  int input; // entrada por stdin
  int total = 0; // suma del total
  int higher = -2147483647; // contiene la variable de mayor valor
  for(int i = 1; i < 16; i++){
    printf("ingrese el valor numero %d: ", i);
    scanf("%d", &input);
    total += input;
    if (input > higher) {
      higher = input;
    }
  }
  printf("el promedio de los valores ingresados es: %d\n", total/15);
  printf("el mayor valor es: %d\n", higher); 
  return 0;
}
