/* 
 * Oscar Soleto 4-2
 * Compilado en GCC v11.2.1
 */

#include <stdio.h>
int main(){
  int dia, mes;
  scanf("%d %d", &dia, &mes);
  
  if(dia<1||dia>31||mes<1||mes>12){
    printf("no se igresó valores correctos\n");
    return 1;
  }
  
  switch(mes){
  case 1:
    if(dia<=20){
      printf("Capricornio");
      break;
    }
    dia = 1;
  case 2:
    if(dia<=18){
      printf("Acuario");
      break;
    }
    dia = 1;
  case 3:
    if(dia<=20){
      printf("Piscis");
      break;
    }
    dia = 1;
  case 4:
    if(dia<=20){
      printf("Aires");
      break;
    }
    dia = 1;
  case 5:
    if(dia<=21){
      printf("Tauro");
      break;
    }
    dia = 1;
  case 6:
    if(dia<=21){
      printf("Géminis");
      break;
    }
    dia = 1;
  case 7:
    if(dia<=22){
      printf("Cáncer");
      break;
    }
    dia = 1;
  case 8:
    if(dia<=23){
      printf("Leo");
      break;
    }
    dia = 1;
  case 9:
    if(dia<=23){
      printf("Virgo");
      break;
    }
  case 10:
    if(dia<=23){
      printf("Libra");
      break;
    }
    dia = 1;
  case 11:
    if(dia<=21){
      printf("Escorpión");
      break;
    }
    dia = 1;
  case 12:
    if(dia<=21){
      printf("Sagitario");
      break;
    }
    else {
       printf("Capricornio");
       break;
    }
  }
  putchar('\n');
  return 0;
}
