/*

9. Faça um programa que mostre a data e a hora do sistema nos seguintes formatos: 

DD/MM/AAAA – mês por extenso e hora:minuto.

*/

#include <stdio.h>
#include <time.h>
 
int main(void)
{
  time_t currentTime;
  struct tm *timeinfo;
  char stringTime[51];
 
  currentTime= time(NULL);
  timeinfo= localtime(&currentTime);
 
  strftime(stringTime, 51, "%d/%m/%Y - ", timeinfo);
 
  printf("%s %s\n",stringTime,__TIME__);
 
  return 0;
}
