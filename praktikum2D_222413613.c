#include <stdio.h>

int main() {
  printf("MENCARI KONVERSI SUHU\n");
  printf("=====================\n");
 
  float celc, fahr;
 
  printf("Derajat Celcius = ");
  scanf("%f", &celc);
 
  //Proses konversi celcius ke fahrenheit
  fahr = (9.0/5.0 * celc) + 32;
  
  printf("Derajat Fahrenheit = %.2f", fahr);
 
  return 0;
}