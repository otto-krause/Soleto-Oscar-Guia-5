#include <stdio.h>
int main(){
  char input;
  scanf("%c", &input);
  switch(input){
  case 'A':
    printf("Excelente");
    break;
  case 'B':
    printf("Buena");
    break;
  case 'C':
    printf("Regular");
    break;
  case 'D':
    printf("Suficiente");
    break;
  case 'F':
    printf("No Suficiente");
    break;
  default:
    break;
  }
  return 0;
}
