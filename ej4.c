// Ejercicio 4
#include <stdio.h>
int main(){
  printf("ingrese in valor natural: ");
  int a;
  int f = 1;
  scanf("%d", &a);
  if (a < 0){
    printf("el valor ingresado no es natural\n");
    return 1;
  }
  else if (a > 0) {
    for(int i = 1; i <= a; i++ ){
      f = f * i;
    }
  }
  printf("el factorial de %d es %d\n", a, f);
  return 0;
}
