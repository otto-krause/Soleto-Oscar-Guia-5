// Ejercicio 5
#include <stdio.h>
int main(){
  int base, exp;
  float r = 1;
  printf("ingrese un numero y un exponente: ");
  scanf("%d %d", &base, &exp);
  if (exp > 0){
    for(int i = 0; i < exp; i++){
      r = r * base;
    }
  }
  else if (exp < 0){
    for(int i = 0; i > exp; i--){
      r = r/ (float)base;
    }
  }
  printf("\nel resultado es: %f\n", r);
}
