// Ejercicio 3
#include <stdio.h>
int main(){
  printf("ingrese dos numeros: ");
  int a,b;
  scanf("%d %d", &a, &b);
  int c = a;
  if (a > b){
    a = b;
    b = c;
  }
  for(int i = a + 1; i < b; i++){
    printf("%d\n", i);
  }
  return 0;
}
