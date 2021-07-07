// Ejercicio 9
#include <stdio.h>
int main(){
  int input;
  int g = 0;
  for(int i = 1; i < 21; i++){
    printf("ingrese el sueldo del empleado %d: ", i);
    scanf("%d", &input);
    if (input > 2000){
      g++;
    }
  }
  printf("son %d los que ganan mas de 2000 y %d los que no\n", g, 20-g);
}
