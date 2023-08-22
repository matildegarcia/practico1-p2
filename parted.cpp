#include "punto.h"

#include <math.h>

#include <stdio.h>



double distancia(Punto p1, Punto p2){

  double x1 = coordX(p1);
  double y1 = coordY(p1);

  double x2 = coordX(p2);
  double y2 = coordY(p2);

  double dx = x2 - x1;
  double dy = y2 - y1;

  // Elevar al cuadrado
  double dx2 = dx * dx;  
  double dy2 = dy * dy;

  // Sumar cuadrados
  double suma = dx2 + dy2;
  
  // Raíz cuadrada  
  double distancia = sqrt(suma);

  return distancia;

} //distancia euclidiana 

int main() {
  Punto p1 = crearPunto(3.0, 5.5);
  Punto p2 = crearPunto(0, 9.5);
  Punto p3 = crearPunto(-2.0, 17.5);

  printf("%f\n", distancia(p1, p2));
  printf("%f\n", distancia(p1, p3));
  printf("%f\n", distancia(p2, p3));

  
}