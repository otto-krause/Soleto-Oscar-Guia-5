#include <stdio.h>
int main(){
  int mes, a;
  scanf("%d %d", &mes, &a);
  int feb = 28;
  if (a%4 == 0 && (a%100 != 0 || a%400 != 0)){
     feb = 29;
  }
  switch(mes){
  case 1:
    printf("31");
    break;
  case 2:
    printf("%d", feb);
    break;
  case 3:
    printf("31");
    break;
  case 4:
    printf("30");
    break;
  case 5:
    printf("31");
    break;
  case 6:
    printf("30");
    break;
  case 7:
    printf("31");
    break;
  case 8:
    printf("31");
    break;
  case 9:
    printf("30");
    break;
  case 10:
    printf("31");
    break;
  case 11:
    printf("30");
    break;
  case 12:
    printf("31");
    break;
  }
}
