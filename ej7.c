// Ejercicio 7
#include <stdio.h>
int main(){
  int input;
  int total = 0, higher = 0, v = 0;
  for( int i = 1; i < 21; i++){
    printf("ingrese el total de unidades diarias de el vendedor %d: ", i);
    scanf("%d", &input);
    printf("se vendio un total de %d en 15 dias\n", input * 15);
    total += input * 15;
    if(higher < input){
      higher = input;
      v = i;
    }
  }
  printf("el total de vendidos es: %d\n", total);
  printf("el mejor vendedor es el %d, con un total de %d unidades vendidas\n",v, higher * 15);
  return 0;
}
